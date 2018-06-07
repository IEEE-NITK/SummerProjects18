section .text
global _start
_start:

mov eax,x
mov ecx,y
mov ebx,sum
mov edx,5
top:
add ebx,[eax]
add ebx,[ecx]

add eax,4
add ebx,4
add ecx,4
dec edx
jnz top

exit:
mov eax, 1
int 0x80

section .data

x dd 2,4,1,8,4
y dd 7,3,5,1,2
sum dd 0,0,0,0,0

