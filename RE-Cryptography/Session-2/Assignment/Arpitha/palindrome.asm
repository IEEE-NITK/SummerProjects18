section .data

msg: DB "Input string:", 0x0a, 0x00		
l1: equ $-msg
t: DB "palindrome", 0x0a, 0x00		
l2: equ $-t
f: DB "not palindrome", 0x0a, 0x00		
l3: equ $-f	

section .bss
	
str: resd 100			
	
section .text
	global _start

_start:
	mov rax, 0x04		
	mov rbx, 0x01		
	lea rcx, [msg]		
	mov rdx, l1	
	int 0x80

	mov rax, 0x03		
	mov rbx, 0x00		
	lea rcx, [str]		
	mov rdx, 400	
	int 0x80

	mov r9,rax
	dec r9
	dec r9


check:
	lea rdi,[str]
	lea rsi,[str+r9]
loop1: 
	mov cl,byte[rdi]
	mov dl,byte[rsi]
	inc rdi
	dec rsi
	cmp cl,dl
	je loop1
	cmp rdi,rsi
	jge _true
	

	mov rax, 0x04		
	mov rbx, 0x01		
	lea rcx, [f]		
	mov rdx, l3	
	int 0x80
	jmp exit

_true:
	mov rax, 0x04		
	mov rbx, 0x01		
	lea rcx, [t]		
	mov rdx, l2	
	int 0x80
	
	mov rax, 0x04		
	mov rbx, 0x01		
	lea rcx, [str]		
	mov rdx, r8	
	int 0x80
	
exit:
	mov rax, 0x01		
	mov rbx, 0x00		
	int 0x80		
