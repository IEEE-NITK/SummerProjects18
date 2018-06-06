section .data
arr1 db 1, 2, 3, 4
arr2 db 10, 9, 8, 7
arr3 db 0,0,0,0	;
section .text
	global _start
_start:
	call fun1
	call exit_prog

fun1:
	mov rsi,4
	mov rdi,0
	mov rax,arr1
	mov rbx,arr2
	mov rcx,arr3
_loop:
	cmp rdi,rsi
	je return
	
A:	mov dl,byte[rax]
	add dl,byte[rbx]
	mov byte[rcx],dl
	
	inc rax
	inc rbx
	inc rcx
B:	inc rdi
	jmp _loop
	
return:
	ret

exit_prog:
	mov rax,0x01
	mov rbx,0x00
	int 0x80
	
