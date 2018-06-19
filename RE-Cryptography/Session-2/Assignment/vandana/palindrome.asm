section.data

str1: DB "Palindrome" , 0x0a ,0x00
len1: equ $-str1
str2: DB "Not Palindrome", 0x0a , 0x00
len2: equ $-str2

section .bss
	
str: resd 100		;Reserving 400 bytes for a str. This is an uninitialized variable.


section .text
	global _start

_start:

	call stdin_read

length:
	mov r9, rax         	
	dec r9		 s;Now, r9 has the length of the string. 
        mov r10,0x00     ;r10 has index 0 
	dec r9		 ;r9 has the last index of the string.	
        mov r8, r9       ;r8 has the last index of the string.
        call reverse_string

stdin_read:
        mov rax, 0x03
        mov rbx, 0x00
        lea rcx, [str]
	mov rdx, 400
        int 0x80
        call length


reverse_string:
		
        lea rdi, [str]		; rdi has the address of the first character.	
	lea rsi, [str + r9]	; rsi has the address of the last character.
        

_loop:
	cmp r10,r8                                             
	jge stdout_write
	cmp byte[rdi], byte[rsi]
        jne stdout_write
	inc rdi
	dec rsi
        inc r10
        dec r9
	jmp _loop

stdout_write_n:
        mov rax, 0x04
        mov rbx, 0x01
        lea rcx [str2] 
        mov rdx, len2
        int 0x80
        call exit_prog

stdout_write:
        
        mov rax, 0x04
        mov rbx, 0x01
        lea rcx [str1] 
        mov rdx, len1
        int 0x80
        call exit_prog

exit_prog:
        mov rax, 0x01
        mov rbx, 0x00
        int 0x80

