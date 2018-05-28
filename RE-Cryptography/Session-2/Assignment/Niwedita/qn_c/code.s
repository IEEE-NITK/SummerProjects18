	.file	"code.c"
	.section	.rodata
.LC0:
	.string	"Enter a string"
.LC1:
	.string	"%[^\n]"
.LC2:
	.string	"String is palindrom"
.LC3:
	.string	"String is not palindrom"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$1024, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -1016(%rbp)
	movl	$.LC0, %edi
	call	puts
	leaq	-1008(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	leaq	-1008(%rbp), %rax
	movq	%rax, %rdi
	call	strlen
	movl	%eax, -1012(%rbp)
	movl	$0, -1020(%rbp)
	jmp	.L2
.L4:
	movl	-1020(%rbp), %eax
	cltq
	movzbl	-1008(%rbp,%rax), %edx
	movl	-1012(%rbp), %eax
	subl	-1020(%rbp), %eax
	subl	$1, %eax
	cltq
	movzbl	-1008(%rbp,%rax), %eax
	cmpb	%al, %dl
	jne	.L3
	addl	$1, -1016(%rbp)
.L3:
	addl	$1, -1020(%rbp)
.L2:
	movl	-1020(%rbp), %eax
	cmpl	-1012(%rbp), %eax
	jl	.L4
	movl	-1016(%rbp), %eax
	cmpl	-1012(%rbp), %eax
	jne	.L5
	movl	$.LC2, %edi
	call	puts
	jmp	.L6
.L5:
	movl	$.LC3, %edi
	call	puts
.L6:
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L8
	call	__stack_chk_fail
.L8:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
