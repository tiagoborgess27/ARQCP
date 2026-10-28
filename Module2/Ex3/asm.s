.equ CONST, 20

.section .text
    .global sum2
    .global sum3

sum2:
    add a0, a0, a0      # a0 = 2*x
    add a0, a0, a1      # a0 = 2*x + y
    ret

sum3:
    addi t0, a0, -CONST # t0 = x - CONST
    add  t0, t0, t0     # t0 = 2*(x - CONST)
    li   t1, CONST      # t1 = CONST    
    sub  t1, t1, a1     # t1 = CONST - y
    add  a0, t0, t1     # a0 = 2*(x - CONST) + (CONST - y)
    ret