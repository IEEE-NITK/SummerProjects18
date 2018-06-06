;code to check whether a given string is a palindrome
section .bss
str: resd 100

section .text
global _start

_start:

mov rax,0x03
mov rbx,0x00
lea rcx,[str]
mov rdx,400
int 0x80
mov r9,rax
dec r9
dec r9

_reverse:
lea rdi, [str]
lea rsi, [str+r9]
mov rcx, 0x00
mov rax, 0x00
_loop:
cmp rdi,r9
jg return
mov cl,byte[rdi]
mov bl,byte[rsi]
inc rdi
dec rsi
cmp cl,bl
je _loop

_result:
cmp cl,bl
je _palindrome

jmp _notpalindrome


_palindrome:
mov r15,0x00
jmp return

_notpalindrome:
mov r15,0x01

return:
mov rax,0x01

mov rbx,0x00

int 0x80










