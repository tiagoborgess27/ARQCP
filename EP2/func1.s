# 1231109: Tiago Borges: 2DE: exercise version

.section .text
    .global vec_sum

vec_sum:
    mv t3, a1    # num
    li t1, 0     #contador
    li t2, 0     #somatorio

vec_sum_loop:
    bge t1, t3, func1_end     # se t1 for maior ou igual a t3 acaba
    lw t0, 0(a0)              # carrega o que está em a0
    add t2, t2, t0            # adiciona ao somatorio
    addi a0, a0, 4            # *ptr++
    addi t1, t1, 1            # contador++     
    j func1_loop              # volta ao ciclo

vec_sum_end:
    mv a0, t2                  # t2 vai para o valor de retorno        
    ret 

