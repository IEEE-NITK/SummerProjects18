section .bss
str: resd 100

section .data:
str1:dw " Is a palindrome",0x0a,0x00
len1: equ $-str1
str2: dw " Is not a Palindrome",0x0a,0x00
len2 : equ $-str2 

section .text
        global _start ;
_start:


        lea rcx,[str]
	mov rdx,400
	call stdin_read
	
	
	mov r9,rax		;to store size of string including 0x0a and 0x00
	dec r9			;dec to exclude 0x00  in size
	dec r9			;dec tp exclude 0x0a in size
	call check_palindrome
	
	
	cmp r8,0x00
	je is_palindrome
	
 	mov rcx,str2		;to print is not Palindrome
	mov rdx,len2
	call stdout_write
	call exit_prog

is_palindrome:	mov rcx,str1	;to print is Palindrome
		mov rdx,len1
		call stdout_write
	        call exit_prog
check_palindrome:
	lea rdi,[str]		;stores address of first char
	lea rsi,[str+r9]	;stores address of last char
	mov al,0x00
	mov bpl,0x00
	mov r8,0x00		;r8 will be 0 if it is palindrome

_loop:	cmp rdi,rsi
	jge return
	
	mov al, byte[rdi]
	mov bpl,byte[rsi]
	cmp al,bpl		;comparing first and last char ,second and second last...and so on
	jne label1

	inc rdi
	dec rsi
	jmp _loop
label1:
	mov r8,0x01		;r8 will be one if it is not palindrome
return:
	ret

stdin_read:
	mov rax, 0x03
	mov rbx, 0x00	
	int 0x80
	ret
stdout_write:
        mov rax,0x04
        mov rbx,0x01
        int 0x80

        ret

exit_prog:
        mov rax,0x01
        mov rbx,0x00
        int 0x80

