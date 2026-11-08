# 1231109: Tiago Borges: 2DE: exercise version

.section .text
    .global vec_stats


#FUNC1 USA T0 T1 T2 T3 A0 A1
vec_stats:
    addi sp, sp, -32        #reserva espaço na stack, 32 para garantir
    sw ra, 28(sp)           #guarda return adress
    blez a1, vec_stats_menor    #se num for menor ou igual a zero retorna 0

    call vec_sum             # chama func1
    sw a0, 0(a2)            # *sum = soma
    div a0, a0, a1          # guarda em a0   a2/a1          (a2 = somatorio | a1 = num)
    j vec_stats_end

vec_stats_menor:
    sw zero, 0(a2)
    li a0, 0
vec_stats_end:
    lw ra, 28(sp) 
    addi sp, sp, 32
    ret