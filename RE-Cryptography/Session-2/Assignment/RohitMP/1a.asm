section .text
        global _start

_start:
        mov r8, 5    ; finding 5 factorial
        mov r9, 0
        mov rax, 1
   here:inc r9
        mul r9
        cmp r9, r8
        jl here
        mov r15, rax
        
        mov rax, 0x01
        mov rbx, 0x00
        int 0x80
           
