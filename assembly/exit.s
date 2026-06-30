.text
.globl main

main:
	movl $60, %eax
	movl $42, %edi
	syscall
