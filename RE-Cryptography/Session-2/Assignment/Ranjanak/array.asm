section .data
        arr1 dq 1,2,3,4,5
        arr2 dq 6,7,8,9,10
        arr3 dq 0,0,0,0,0

section .text
        global _start:

_start:
       lea r8,[arr1]
       lea r9,[arr2]
       lea r10,[arr3]
       mov rdi, 0
       mov rsi, 5
_here: inc rdi
       mov r11,[r8]
       add r11,[r9]
       mov [r10],r11
       add r8, 8
       add r9, 8
       add r10, 8
       cmp rdi, rsi
       jl _here


      mov rax, 0x01
      mov rbx, 0x00
      int 0x80
