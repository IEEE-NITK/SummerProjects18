SECTION .data

SECTION .bss
str: resd 100

SECTION .text
global main
main:
	lea rcx, [str]
	mov rdx, 400
	
	mov rax, 0x03
        mov rbx, 0x00
        int 0x80
	
	mov r9,rax
	dec r9
	dec r9
	mov rsi, 0
	mov rdi,r9
	inc rdi
	dec rsi

loop:
	inc rsi
	dec rdi
	mov cl, byte[str+rsi]
	mov dl, byte[str+rdi]
	cmp cl, dl
	je loop
	cmp rsi, rdi
	jge palindrome
	jmp not_palindrome

palindrome:
	mov r15, 1
	jmp exit

not_palindrome:
	mov r15,0



stdout_write:
       mov rax, 0x03
        mov rbx, 0x00
        int 0x80

        ret
exit:
	mov rax, 0x01
        mov rbx, 0x00
        int 0x80


 
	
	
