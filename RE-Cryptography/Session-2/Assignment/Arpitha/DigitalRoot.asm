section .bss
	
str: resd 100		


section .data


msg db 'Enter number: ',0x0a
l equ $ -msg

section .text
	global _start

_start:

	mov rax, 0x04		
	mov rbx, 0x01		
	lea rcx, [msg]		
	mov rdx, l	
	int 0x80

	lea rcx, [str]
	mov rdx, 400
	mov rax,0x03
	mov rbx,0x00
	int 0x80

	mov r9, rax
	dec r9	
	dec r9			


	lea rsi, [str]		 
	
	lea rdi, [str + r9]	

	mov rcx, 0x00		
	mov rax, 0x00
	mov rdx, 0x00		
	
_loop:
	mov cl, byte[rsi]
	sub cl,0x30
	add al,cl
	inc rsi
	cmp rsi,rdi
	jle _loop
	mov rax,rax
	mov rbx,9
	idiv rbx


	cmp rdx,0
	je loop1
	jmp exit
loop1:
	add rdx,9

exit:
	mov rax,0x01
	mov rbx,0x00
	int 0x80

;rdx stores result
