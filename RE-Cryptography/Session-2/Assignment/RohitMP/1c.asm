section .bss 
        str: resd 100

section .text
        global _start
    
_start:
        mov rax, 0x03
        mov rbx, 0x00
        lea rcx, [str]
        mov rdx, 400   
        int 0x80

        mov r8, rax
        dec r8
        dec r8

        mov rsi, 0
        mov rdi, r8
        inc rdi
        dec rsi
   loop:cmp rsi, rdi
        jge check

        inc rsi
        dec rdi
        mov cl, byte[str+rsi]
        mov dl, byte[str+rdi]
        cmp dl, cl
        je loop
        
  check:cmp cl, dl
        jl notPalindrome
        jmp palindrome
        
  notPalindrome:mov r15, 0
  jmp exit
  
  palindrome:mov r15 ,1
  
  exit:               

