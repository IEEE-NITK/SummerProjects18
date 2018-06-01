section .data
 num1 dw 25
 msg db 'factorial of 25 is: '
 len equ $-msg

section .bss
 fac resd 1

section .text
 global _start

_start:
 mov edx,len
 mov ecx,msg
 mov ebx,1
 mov eax,4
 int 0x80
 call factorial
 mov [fac],ecx
 mov edx,[fac]
 mov ebx,1
 mov eax,4
 int 0x80

factorial:
 mov ecx,0x01
 lea edi ,[num1]
_loop:
 jz return
 imul ecx,edi
 dec edi
 jmp _loop
return:
 ret
