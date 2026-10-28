.equ CONST, 20

.section .text
    .global sum2
    .global sum3
    .global three_halves
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

three_halves:
    li  t0, 3
    mul a0, a0, t0      # a0 = 3*x
    li  t1, 2
    div a0, a0, t1      # a0 = (3*x) / 2
    ret