.globl main
.data
greeting:
	.ascii "Hi\n"

.text
main:
	movq $1, %rdi
	lea greeting(%rip), %rsi
	movq $3, %rdx
	movq $1, %rax
	syscall

	movl $60, %eax
	movl $0, %edi
	syscall


