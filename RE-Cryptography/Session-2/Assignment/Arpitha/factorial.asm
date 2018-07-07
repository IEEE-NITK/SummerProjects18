section .data

section .text
	global _start
_start:
	mov rcx,5
	mov rdx,1
loop:
	imul rdx,rcx
	dec rcx
	cmp rcx,1
	jg loop

	mov rax,0x01
	mov rbx,0x00
	int 0x80


	

