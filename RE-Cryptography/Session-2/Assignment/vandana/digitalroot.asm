section .data

str1: DB "Number" , 0x0a ,0x00
len: equ $-str1


section .bss
	
num: resb 8		


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
        mov rcx, num
	mov rdx, 8
        int 0x80

        mov r9, 0x00
        mov r10, 0x00
        mov rax, num
        
        call mod
mod:     
        
        mov rdx, 0
        mov rbx, 10
        div rbx
        add r10, rdx
        cmp rax, 0x00
        je c_digit 
        jmp mod

c_digit:
        mov r9, 0x00
        mov r9, r10
        mov rax, r10
        mov r10, 0x00
        mov rdx, 0
        mov rbx, 10
        div rbx 
        add r10, rdx       
        cmp rax, 0x00
        je exit_prog
        jmp mod

exit_prog:
        mov rax, 0x01
        mov rbx, 0x00
        int 0x80
        
       
        
        
 


       
