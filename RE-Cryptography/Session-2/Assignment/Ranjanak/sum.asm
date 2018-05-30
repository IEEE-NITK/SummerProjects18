section .bss
         num: resb 100

section .text
         global _start

_start:
         mov rax, 0x03
         mov rbx, 0x00
         lea rcx, [num]
         mov rdx, 100
         int 0x80

         mov r8, rax
         dec r8
         dec r8
         mov rax, 0
         mov rbx, 0
         mov rsi, 0
         mov rcx, 0
         mov rdx, 0

_loop:
       mov cl, byte[num+rsi]
       sub cl, 48
       add bl, cl
       inc rsi
       cmp rsi, r8
       jle _loop

       mov r9, 9
       mov rax, rbx
       div r9
       mov r15, rdx

       mov rax, 0x01
       mov rbx, 0x00
       int 0x80
