
section .text
global _start
_start:


mov ecx, 3 ;setting a counter
mov edx, 0
mov eax, 3 ;number for which factorial is calculated is stored
dec ecx
jz next
factorial:  
  mov edi, ecx
  imul eax, edi
loop factorial  

next:
 add eax, 48
 mov [fact], eax
;write the message
 mov edx, len
 mov ecx,msg
 mov ebx, 1
 mov eax, 4
 int 0x80
;write the factorial obtained
 mov edx , 1
 mov ecx, fact
 mov ebx,1
 mov eax, 4
 int 0x80

 mov eax, 1
 int 0x80

section .data
msg db 'factorial of 3 is:',0xa
len equ $ -msg

section .bss
fact resb 1
