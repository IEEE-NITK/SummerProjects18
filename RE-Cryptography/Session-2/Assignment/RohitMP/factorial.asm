section .text
        global _start

_start:
        mov r8, 5    ; finding 5 factorial
        mov r9, 0    ; using register r9 as a counter register
        mov rax, 1   ; initially storing 1 since it is the multiplicative identity
   here:inc r9       ;
        mul r9       ; multiply r9 with rax and the result is stored in rax
        cmp r9, r8   ; compare the counter with the number whose factorial is to be calculated
        jl here
        mov r15, rax ; final answer in stored in r15
        
        mov rax, 0x01
        mov rbx, 0x00
        int 0x80     ; exit call
           
