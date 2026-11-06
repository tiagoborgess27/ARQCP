.section .text
    .global five_count
    .global str_copy_roman
    .global str_copy_roman2

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