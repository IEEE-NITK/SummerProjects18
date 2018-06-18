section .data
arr DQ 1,2,3
arr1: DQ 3,4,5
arr2 : DQ 

section .text
    global _start

_start:

     mov rsi, [arr1]
     mov rdi, [arr]
     mov r9, [arr2]
     mov r8, 0x01
     call add


add:
     cmp r8, 0x04
     je end_prog
     add rsi, rdi
     inc rsi
     inc rdi
     mov r9, rsi

end_prog:
     mov rax, 0x01
     mov rbx, 0x00
     int 0x80

