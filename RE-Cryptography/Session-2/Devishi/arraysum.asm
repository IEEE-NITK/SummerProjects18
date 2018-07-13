;to find sum of arrays

section .data

array1 dq 3,6,9,18
array2 dq 9,108,24,21
array3 dq 0,0,0,0

section .text

global sum

sum:

mov rax,array1
mov rbx,array2
mov rcx,array3
mov r8,4 ; as array size
mov r9,0 ; as a counter

loop:

add rcx,[array1]
add rcx,[array2]
add rcx,8
add rax,8
add rbx,8
inc r9
cmp r9,r8
jl loop

exit:
int 0x80
