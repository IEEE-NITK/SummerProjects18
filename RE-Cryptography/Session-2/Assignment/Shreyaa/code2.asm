
section .data

arr1: dd 1,3,5,7,9
arr2: dd 2,4,6,8,10

section .text
global _start


_start:
mov eax,0x01


_loop:






mov ebx,[arr1+eax] 
mov ecx,[arr2+eax] 
add ebx,ecx 
mov r15D,ebx
inc ebx 
inc ecx
inc r15

inc eax
cmp eax,0x05 
jg  _return
jmp _loop

_return:

mov rax,0x01
mov rbx,0x00
int 0x80
