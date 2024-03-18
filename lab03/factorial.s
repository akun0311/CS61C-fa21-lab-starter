.globl factorial

.data
n: .word 1

.text
main:
    la t0, n           #t0 = &n
    lw a0, 0(t0)       #a0 = mem[t0] = n = 8
    jal ra, factorial  #

    addi a1, a0, 0     #a1 = a0
    addi a0, x0, 1     #a0 = x0 + 1 = 1
    ecall # Print Result

    addi a1, x0, '\n'  # a1 = x0 + '\n' = '\n'
    addi a0, x0, 11    # a0 = x0 +  11  = 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit
factorial:
    addi t0, x0, 1    # t0 = 1
    addi t1, x0, 1    # t1 = 1
loop:
    beq t0, a0, exit    
    addi t0, t0, 1    # t0 = t0 + 1 
    mul t1, t0, t1    # t1 = t1 * t0     
    bne  t0, a0, loop # t0 == a0 ? 
exit: 
    add a0, x0, t1    # a0 = t1
    jr ra

#a0-a7 for function arguments, a0-a1 for return values
#sp, stack pointer, ra return address
#s0-s11 saved registers
#t0-t6 temporaries
#zero