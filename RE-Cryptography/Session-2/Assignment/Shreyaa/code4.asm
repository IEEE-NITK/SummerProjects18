;this program finds the digital root of a number n,taken as input from user

section .bss
n : resb 100 

section .text
global _start

_start:
mov rax, 0x03
mov rbx, 0x00
lea rcx,[n]
mov rdx,100
int 0x80

_digroot:
mov r15,rax
dec r15
dec r15
lea rdi,[n]
mov rax,0x00
mov rbx,0x00
mov rcx,0x00
mov rdx,0x00

_loop:
mov cl,byte[rdi]
add al,cl
inc rbx 
inc rdi
cmp rbx, r15
jle _loop

_end:
mov r8,9
mov rbx,rax
div r8
mov r14,rdx

mov rax,0x01
mov rbx,0x00
int 0x80












exit_prog:
mov rax, 0x01
mov rbx, 0x00
int 0x80

