section .data
 msg1 dw 10,13,"This statement should get printed",$
 msg2 dw 10,13,"This statement should not get printed",$
 msg3 dw 10,13,"This statement should also get printed",$

section .text
 global _start

_start:
 mov ecx,msg1
 mov ebx,1
 mov eax,4
 int 0x80
 jmp label1
 mov ecx,msg2
 mov ebx,1
 mov eax,4
 int 0x80
label1:
 mov ecx,msg3
 mov ebx,1
 mov eax,4
 int 0x80
 mov eax,1
 int 0x80
