;this program finds the digital root of a number n,taken as input from user
;I had missed some conditions previously,I have added them along with the explanation for the code 
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
mov r15,rax             ;rax stores the length of the string,it is copied onto register r15 
dec r15                 ;decreasing value of r15 by 1,to account for terminating character 
dec r15                 ;decreasing value of r15 by 1 again,cause addition of digits of number is done n-1 times,where n is number of digits 
lea rdi,[n]
mov rax,0x00            ;initialising all variables to 0 
mov rbx,0x00
mov rcx,0x00
mov rdx,0x00

_loop:
mov cl,byte[rdi]        ;moving digits of number one by one onto register cl
add al,cl               ;adding digits of number,al is initially zero,and finally stores the value of the sum 

inc rbx                 ;counter for the loop,loop is repeated n-1 times,where n is number of digits 
inc rdi                 ;to move to the next digit of the number 
cmp rbx,r15             ;checking condition for loop 
jle _loop

_end:
mov r8,9

div r8                 ;dividing sum by 9,sum is stored in rax 
cmp rdx,0x00           ;checking whether remainder is 0 or not 
je _digroot1

jmp _digroot2


_digroot1              ;if remainder is zero,sum is 9,stored in r14
mov r14,0x09

_digroot2              ;if remainder is not zero,sum is equal to the remainder,stored in r14
mov r14,rdx

mov rax,0x01
mov rbx,0x00
int 0x80












exit_prog:
mov rax, 0x01
mov rbx, 0x00
int 0x80

