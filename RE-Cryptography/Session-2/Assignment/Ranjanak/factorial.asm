section .text:
              global _start

_start:
       mov r8, 5
       mov r9, 0
       mov rax,1
_here:inc r9
      mul r9
      cmp r9, r8
      jl _here
      mov r15, rax

      mov rax, 0x01
      mov rbx, 0x00
      int 0x80
