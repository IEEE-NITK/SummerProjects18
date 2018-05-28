;factorial 

section .data

var dw 4

section .text

global fact:

fact:

push rbp
mov rbp ,rsp
sub rsp,4
mov dword[rbp-4], 1;prod=1
mov rbx,1

loop:

cmp rbx,[rbp+8]
jnle end
mul [rbp-4], rbx
inc rbx
jmp loop


end:

mov rbx,[rbp+12]
mov rax,[rbp-4]
mov [rbx],rax
mov rsp,rbp
pop rbp
ret
