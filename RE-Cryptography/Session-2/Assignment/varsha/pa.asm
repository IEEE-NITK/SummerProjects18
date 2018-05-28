;program prints 'its a palindrme' if the given string is palindromic.



section .bss
	
str: resd 100		;Reserving 400 bytes for a str


section .data


msg db 'its a palindrome',0x0a
len equ $ -msg

section .text
	global _start

_start:

	lea rcx, [str]
	mov rdx, 400
	mov rax,0x03
	mov rbx,0x00
	int 0x80

	mov r9, rax
	dec r9	
	dec r9			;length of the string is obtained


	lea rsi, [str]		;rsi has address of the first character of the string
	
	lea rdi, [str + r9]	;rdi  has the  address of the last character 

	mov rcx, 0x00		
	mov rax, 0x00		
	
_loop:
	mov cl, byte[rsi]
	mov al, byte[rdi]
	cmp cl,al
	jne exit
	
	inc rsi
	dec rdi
	cmp rsi,rdi
	jl _loop


	
pal:    mov rdx,len
	mov rcx,msg
	mov rax,0x04
	mov rbx,0x01
	int 0x80		
	jmp exit


exit:
mov rax, 0x01
        mov rbx, 0x00
        int 0x80
