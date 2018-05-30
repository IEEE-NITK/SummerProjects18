section .bss
         strng: resd 100

section .text
        global _start

_start:
       mov rax, 0x03
       mov rbx, 0x00
       lea rcx,[strng]
       mov rdx, 400
       int 0x80

       mov r8, rax
       dec r8
       dec r8

       mov rcx, 0
       mov rdx, 0
       mov rsi, 0
       mov rdi, r8
       inc rdi
       dec rsi
 loop:
      cmp rsi, rdi
      jge check

      inc rsi
      dec rdi
      mov cl, byte[strng+rsi]
      mov dl, byte[strng+rdi]
      cmp dl, cl
      je loop

check: cmp cl, dl
       jl notpalindrome
       jmp palindrome


notpalindrome: mov r15, 0
jmp exit

palindrome: mov r15, 1

exit:
       mov rax, 0x01
       mov rbx, 0x00
       int 0x80
