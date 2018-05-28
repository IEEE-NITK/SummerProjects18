	.file	"code.c"
	.section	.rodata
.LC0:
	.string	"Enter value of n,m"
.LC1:
	.string	"%d%d"
	.align 8
.LC2:
	.string	"Enter all the elements of first array"
.LC3:
	.string	"%d"
	.align 8
.LC4:
	.string	"Enter all the elements of second array"
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
	subq	$120032, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$.LC0, %edi
	call	puts
	leaq	-120028(%rbp), %rdx
	leaq	-120032(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	$.LC2, %edi
	call	puts
	movl	$0, -120024(%rbp)
	jmp	.L2
.L5:
	movl	$0, -120020(%rbp)
	jmp	.L3
.L4:
	leaq	-120016(%rbp), %rcx
	movl	-120020(%rbp), %eax
	movslq	%eax, %rsi
	movl	-120024(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rsi, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movq	%rax, %rsi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	addl	$1, -120020(%rbp)
.L3:
	movl	-120028(%rbp), %eax
	cmpl	%eax, -120020(%rbp)
	jl	.L4
	addl	$1, -120024(%rbp)
.L2:
	movl	-120032(%rbp), %eax
	cmpl	%eax, -120024(%rbp)
	jl	.L5
	movl	$.LC4, %edi
	call	puts
	movl	$0, -120024(%rbp)
	jmp	.L6
.L9:
	movl	$0, -120020(%rbp)
	jmp	.L7
.L8:
	leaq	-80016(%rbp), %rcx
	movl	-120020(%rbp), %eax
	movslq	%eax, %rsi
	movl	-120024(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rsi, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movq	%rax, %rsi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	addl	$1, -120020(%rbp)
.L7:
	movl	-120028(%rbp), %eax
	cmpl	%eax, -120020(%rbp)
	jl	.L8
	addl	$1, -120024(%rbp)
.L6:
	movl	-120032(%rbp), %eax
	cmpl	%eax, -120024(%rbp)
	jl	.L9
	movl	$0, -120024(%rbp)
	jmp	.L10
.L13:
	movl	$0, -120020(%rbp)
	jmp	.L11
.L12:
	movl	-120020(%rbp), %eax
	movslq	%eax, %rcx
	movl	-120024(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movl	-120016(%rbp,%rax,4), %ecx
	movl	-120020(%rbp), %eax
	movslq	%eax, %rsi
	movl	-120024(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rsi, %rax
	movl	-80016(%rbp,%rax,4), %eax
	addl	%eax, %ecx
	movl	-120020(%rbp), %eax
	movslq	%eax, %rsi
	movl	-120024(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rsi, %rax
	movl	%ecx, -40016(%rbp,%rax,4)
	addl	$1, -120020(%rbp)
.L11:
	movl	-120028(%rbp), %eax
	cmpl	%eax, -120020(%rbp)
	jl	.L12
	addl	$1, -120024(%rbp)
.L10:
	movl	-120032(%rbp), %eax
	cmpl	%eax, -120024(%rbp)
	jl	.L13
	movl	$0, %eax
	movq	-8(%rbp), %rdi
	xorq	%fs:40, %rdi
	je	.L15
	call	__stack_chk_fail
.L15:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
