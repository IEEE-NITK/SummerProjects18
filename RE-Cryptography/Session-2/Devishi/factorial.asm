; to find the factorial of 9

section .data

section .text

global fact

fact:

mov rax,9
mov rbx,rax

loop:

dec rax
mul rax
cmp rax,1
je exit
jmp loop

exit:

mov r8,rax
mov rax, 0x01
mov rbx,0x00
int 0x80


