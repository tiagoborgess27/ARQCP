.equ CONST, 20
.equ A, 3
.equ B, 4

.section .text
    .global sum2
    .global sum3
    .global three_halves
    .global parallel
    .global time_sec
    .global my_remainder
    .global is_multiple
    .global six_packs
    .global big_sum
    .global is_greater
    .global in_order
    .global get_area
    .global get_area2
    .global compute
    .global steps
    .global sigma

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

parallel:
    mul t0, a0, a1      # t0 = x * y
    add t1, a0, a1      # t1 = x + y
    div a0, t0, t1      # a0 = (x * y) / (x + y)
    ret

time_sec:
    li t0, 3600
    mul t0, a0, t0      # t0 = hour * 3600
    li t1, 60
    mul t1, a1, t1      # t1 = min * 60
    add a0, a2, t1      # a0 = sec + min*60
    add a0, a0, t0      # a0 += hour*3600
    ret

my_remainder:
    add t0, a0, a1      # t0 = x + y
    rem a0, t0, a2      # a0 = (x + y) % z
    ret

is_multiple:
    rem t0, a0, a1
    seqz a0, t0         # a0 = (t0 == 0) ? 1 : 0
    ret

six_packs:
    addi t0, a0, 5      # t0 = num + 5
    li   t1, 6
    div  a0, t0, t1     # a0 = (num + 5) / 6
    ret

# x = (a1:a0)   a0 = x_low,  a1 = x_high
# y = (a3:a2)   a2 = y_low,  a3 = y_high
big_sum:
    add  t0, a0, a2     # t0 = x_low + y_low
    sltu t1, t0, a0     # t1 = 1 se houve carry
    add  t2, a1, a3     # t2 = x_high + y_high
    add  a1, t2, t1     # a1 = parte alta + carry
    mv   a0, t0         # a0 = parte baixa
    ret

is_greater:
    slt a0, a1, a0      # a0 = (y < x) = (x > y)
    ret

in_order:
    slt t0, a1, a0      # t0 = (y < x)
    slt t1, a2, a1      # t1 = (z < y)
    and a0, t0, t1      # a0 = t0 && t1
    ret

get_area:
    add t0, a0, a1      # t0 = len1 + len2
    mul t0, t0, a2      # t0 = (len1 + len2) * height
    li  t1, 2
    div a0, t0, t1      # a0 = ((len1 + len2) * height) / 2
    ret

get_area2:
    li t0, 2
    add t1, a0, a1      # t1 = len1 + len2
    div t1, t1, t0      # t1 = (len1 + len2) / 2
    mul a0, t1, a2      # a0 = ((len1 + len2) / 2) * height
    ret

compute:
    mul t0, a0, a1      # t0 = a * b
    mul t1, a2, a0      # t1 = c * a
    sub t0, t0, t1      # t0 = a*b - c*a
    div a0, t0, a3      # a0 = (a*b - c*a) / d
    ret

steps:
    mv  t1, a0          # t1 = num (guardado para o passo e)
    li  t0, 3
    mul a0, a0, t0      # a) * 3
    li  t0, 6
    add a0, a0, t0      # b) + 6
    li  t0, 3
    div a0, a0, t0      # c) / 3
    li  t0, 12
    add a0, a0, t0      # d) + 12
    sub a0, a0, t1      # e) - num
    li  t0, 4
    sub a0, a0, t0      # f) - 4
    ret

# sigma(n) = soma, i=1..n, de (i^2 * A^3) / B   (interpretação da fórmula)
sigma:
    li   t1, 0          # t1 = soma acumulada
    li   t0, 1          # t0 = i
    li   t4, A
    mul  t5, t4, t4
    mul  t5, t5, t4     # t5 = A^3
    li   t6, B          # t6 = B
sigma_loop:
    bgt  t0, a0, sigma_end   # se i > n, termina
    mul  t2, t0, t0     # t2 = i^2
    mul  t2, t2, t5     # t2 = i^2 * A^3
    div  t2, t2, t6     # t2 = (i^2 * A^3) / B
    add  t1, t1, t2     # soma += termo
    addi t0, t0, 1      # i++
    j    sigma_loop
sigma_end:
    mv   a0, t1         # resultado em a0
    ret