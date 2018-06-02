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

;mov rcx,[str]	;TO STORE initial string
	
	
	mov r9,rax
	dec r9
	call reverse_string
	
;mov rdx,[str]	; TO STORE reversed string


A:	cmp r8,0x00
	je is_palindrome
B:	mov rcx,str2
	mov rdx,len2
	call stdout_write
	call exit_prog

is_palindrome:	mov rcx,str1
		mov rdx,len1
		
		call stdout_write
	        call exit_prog
reverse_string:
	lea rdi,[str]
	lea rsi,[str+r9-1]
	mov rax,0x00
	mov rbp,0x00
	mov r8,0x00
_loop:	cmp rdi,rsi
	jge return
	mov al, byte[rdi]
	mov bpl,byte[rsi]
	cmp al,bpl
	jne label1

	inc rdi
	dec rsi
	jmp _loop
label1:
	mov r8,0x01
return:
;	mov byte[str+r9+1],0x0a	
;	mov byte[str+r9+2],0x00
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

