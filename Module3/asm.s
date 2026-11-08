.section .text
    .global five_count
    .global str_copy_roman
    .global str_copy_roman2
    .global vec_add_three
    .global vec_sum
    .global vec_avg
    .global encrypt
    .global decrypt
    .global test_even
    .global vec_sum_even
    .global vec_search

five_count:
    li   t0, 0              # t0 = contador
    li   t2, '5'            # t2 = 53, o caracter a procurar
five_loop:
    lbu  t1, 0(a0)          # t1 = *ptr (byte sem sinal)
    beqz t1, five_end       # se *ptr == '\0', termina
    bne  t1, t2, five_next  # se *ptr != '5', salta o incremento
    addi t0, t0, 1          # contador++
five_next:
    addi a0, a0, 1          # ptr++
    j    five_loop
five_end:
    mv   a0, t0             # resultado em a0
    ret 

str_copy_roman:
    li   t2, 'u'                 # t2 = 'u'
    li   t3, 'v'                 # t3 = 'v'
roman_loop:
    lbu  t1, 0(a0)               # t1 = *ptr1
    bne  t1, t2, roman_store     # se nao e 'u', mantem
    mv   t1, t3                  # se e 'u', troca por 'v'
roman_store:
    sb   t1, 0(a1)               # *ptr2 = t1 (copia tambem o '\0')
    beqz t1, roman_end           # se era '\0', termina
    addi a0, a0, 1               # ptr1++
    addi a1, a1, 1               # ptr2++
    j    roman_loop
roman_end:
    ret

str_copy_roman2:
    li   t2, 'u'                 # t2 = 'u'
    li   t3, 'v'                 # t3 = 'v'
    li   t4, 'U'                 # t4 = 'U'
    li   t5, 'V'                 # t5 = 'V'
roman2_loop:
    lbu  t1, 0(a0)               # t1 = *ptr1
    bne  t1, t2, roman2_check_upper   # se nao e 'u', testa 'U'
    mv   t1, t3                  # 'u' -> 'v'
    j    roman2_store
roman2_check_upper:
    bne  t1, t4, roman2_store    # se nao e 'U', mantem
    mv   t1, t5                  # 'U' -> 'V'
roman2_store:
    sb   t1, 0(a1)               # *ptr2 = t1 (copia tambem o '\0')
    beqz t1, roman2_end          # se era '\0', termina
    addi a0, a0, 1               # ptr1++
    addi a1, a1, 1               # ptr2++
    j    roman2_loop
roman2_end:
    ret

vec_add_three:
    mv t3, a1                 # t3 = num
    li t1, 0                  # t1 contador
vec_add_three_loop:
    lh t0, 0(a0)              #t0 = *ptr
    addi t0, t0, 3
    sh t0, 0(a0)              #*ptr = t0
    addi t1, t1, 1            # contador++                          
    addi a0, a0, 2            # *ptr++ (2 por ser short)          
    beq t1, t3, vec_add_three_end
    j vec_add_three_loop 
vec_add_three_end:
    ret

vec_sum:
    li t1, 0                  # contador
    li t2, 0                  # somatorio
vec_sum_loop:
    bge t1, a1, vec_sum_end
    lw t0, 0(a0)
    add t2, t2, t0            # somatorio += *ptr
    addi t1, t1, 1            # contador++
    addi a0, a0, 4            # ptr++                      
    j vec_sum_loop
vec_sum_end:
    mv a0, t2
    ret

vec_avg:
    addi sp, sp, -16        # reserva espaço na stack
    sw   ra, 12(sp)         # guarda o endereço de retorno
    sw   a1, 8(sp)          # guarda num
    call vec_sum            # a0 = soma de todos os elementos
    lw   t0, 8(sp)          # t0 = num
    div  a0, a0, t0         # a0 = soma / num
    lw   ra, 12(sp)         # repõe ra
    addi sp, sp, 16         # liberta a stack
    ret

encrypt:
    li   t3, 0                  # contador
    li   t1, 'a'
    li   t2, ' '
encrypt_loop:
    lb   t0, 0(a0)              # t0 = *ptr
    beqz t0, encrypt_end        # fim da string
    beq  t0, t1, encrypt_next   # se 'a', não altera
    beq  t0, t2, encrypt_next   # se espaço, não altera
    addi t0, t0, 1              # caracter + 1
    sb   t0, 0(a0)              # escreve de volta na string
    addi t3, t3, 1              # contador++
encrypt_next:
    addi a0, a0, 1              # ptr++
    j    encrypt_loop
encrypt_end:
    mv   a0, t3                 # devolve o contador
    ret

decrypt:
    li   t3, 0                  # contador
    li   t1, 'a'
    li   t2, ' '
decrypt_loop:
    lb   t0, 0(a0)              # t0 = *ptr
    beqz t0, decrypt_end        # fim da string
    beq  t0, t1, decrypt_next   # se 'a', não altera
    beq  t0, t2, decrypt_next   # se espaço, não altera
    addi t0, t0, -1             # caracter - 1
    sb   t0, 0(a0)              # escreve de volta na string
    addi t3, t3, 1              # contador++
decrypt_next:
    addi a0, a0, 1              # ptr++ (continua a avançar)
    j    decrypt_loop
decrypt_end:
    mv   a0, t3                 # devolve o contador
    ret
    
test_even:
    li   t1, 2
    rem  a0, a0, t1             # a0 = x % 2 (0 se par, 1 ou -1 se ímpar)
    beqz a0, test_even_iseven   # resto 0 -> par
    li   a0, 0                  # ímpar
    ret
test_even_iseven:
    li   a0, 1                  # par
    ret

vec_sum_even:
    addi sp, sp, -32             # reserva 32 bytes na stack (sp desce; múltiplo de 16)
    sw   ra, 28(sp)              # guarda o endereço de retorno (o call vai sobrescrevê-lo)
    sw   s0, 24(sp)              # guarda o s0 do chamador (vamos usar s0 como ptr)
    sw   s1, 20(sp)              # guarda o s1 do chamador (vamos usar s1 como num restante)
    sw   s2, 16(sp)              # guarda o s2 do chamador (vamos usar s2 como somatório)
    mv   s0, a0                  # s0 = ptr (cópia do argumento a0; sobrevive ao call)
    mv   s1, a1                  # s1 = num (cópia do argumento a1; sobrevive ao call)
    li   s2, 0                   # s2 = 0, somatório começa a zero
vec_sum_even_loop:
    blez s1, vec_sum_even_end    # se num restante <= 0, não há mais elementos: sai
    lw   a0, 0(s0)               # a0 = *ptr (elemento atual, é o argumento de test_even)
    call test_even               # chama test_even(a0); devolve em a0: 1 se par, 0 se ímpar
    beqz a0, vec_sum_even_next   # se devolveu 0 (ímpar), salta a soma
    lw   t0, 0(s0)               # relê o elemento (a0 foi sobrescrito pelo retorno de test_even)
    add  s2, s2, t0              # somatório += elemento par
vec_sum_even_next:                              
    addi s0, s0, 4               # ptr++ (avança 4 bytes: um int)
    addi s1, s1, -1              # num-- (falta um elemento a menos)
    j    vec_sum_even_loop       # volta ao início do ciclo
vec_sum_even_end:
    mv   a0, s2                  # a0 = somatório (valor de retorno)
    lw   s2, 16(sp)              # repõe o s2 do chamador
    lw   s1, 20(sp)              # repõe o s1 do chamador
    lw   s0, 24(sp)              # repõe o s0 do chamador
    lw   ra, 28(sp)              # repõe o endereço de retorno (para o ret voltar ao main)
    addi sp, sp, 32              # liberta os 32 bytes da stack (sp sobe de volta)
    ret                          # volta ao chamador com o resultado em a0

vec_search:
    mv t3, a2                           # t3 = x
    mv t2, a1                           # t2 = num
    li t1, 0                            # contador
vec_search_loop:
    bge t1, t2, vec_search_end          # t1 >= t2 --> vec_search_end
    lw  t0, 0(a0)
    bne t0, t3, vec_search_next
    ret
vec_search_next:
    addi t1, t1, 1
    addi a0, a0, 4
    j vec_search_loop
vec_search_end:
    li a0, 0
    ret
