section .data

msg: DB "Input number:", 0x0a, 0x00		
l: equ $-msg
	

section .bss
	
n: resb 6	
r: resb 4

section .text
	global _start
_start:
	mov rax, 0x04		
	mov rbx, 0x01		
	lea rcx, [msg]		
	mov rdx, l	
	int 0x80

	mov rax, 0x03		
	mov rbx, 0x00		
	mov rcx, n		
	mov rdx, 6	
	int 0x80

	mov eax,n
	cdq ; extend EAX into EDX
	mov ebx,9
	idiv ebx ;edx stores reminder which is the digital root

	cmp edx,0
	je loop1
	jmp exit
loop1:
	add edx,9

exit:
	mov rax,0x01
	mov rbx,0x00
	int 0x80
