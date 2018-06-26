section .data

str1: DB "Number" , 0x0a ,0x00
len: equ $-str1


section .bss
	
num: resb 100		


section .text
	global _start

_start:
        
        mov rax, 0x04           
        mov rbx, 0x01
        lea rcx, [str1] 
        mov rdx, len
        int 0x80
        
        mov rax, 0x03
        mov rbx, 0x00           ;reads the input number
        lea rcx, [num]
	mov rdx, 100
        int 0x80
        
        mov r9, rax         	
	dec r9	                ;Now, r9 has the length of the string.      
	dec r9		        ;r9 has the last index of the string.	
        
        lea rdi, [num]		; rdi has the address of the first character.	
	lea rsi, [num + r9]	; rsi has the address of the last character.

        mov rax, 0x00
        mov r10, 0x00 
        mov rdx, 0x00      
        call mod
mod:                                                       
                                                                      
        mov cl,byte[rdi]
        sub cl, '0'
	inc rdi
        inc r10
        add al, cl   
	cmp r10,r9
    
        jg c_digit
	jmp mod

c_digit:
        mov rax, rax
        mov rbx, 9
        idiv rbx
        cmp rdx, 0
        je root
        jmp exit_prog
root:
       mov rdx, 9
       jmp exit_prog


exit_prog:
        mov rax, 0x01
        mov rbx, 0x00
        int 0x80
        
