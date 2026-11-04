.section .text
    .global five_count

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