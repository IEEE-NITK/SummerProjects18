SECTION .data
	arr1 dq 1,2,3   ; the first array
        arr2 dq 1,2,3  ; the second array
        arr3 dq 0,0,0   ; the third array which will store the sum of the above two


SECTION .text
global _start

_start:
	lea r8, [arr1]      ; r8 is storing the address of the first element of arr1
        lea r9, [arr2]      ; r9 is storing the address of the first element of arr2
        lea r10, [arr3]     ; r10 is storing the address of the first element of arr3
	mov rdi, 0
	mov rsi, 3

.beginLooping:

	mov r11, [r8]
	add r11, [r9]
	mov [r10], r11
	inc rdi
	add r8, 8
	add r9, 8
	add r10, 8
	cmp rdi, rsi
	jl .beginLooping

	
	mov rax, 0x03
        mov rbx, 0x00
        int 0x80
	ret		;std_out
   
 	mov rax, 0x01
        mov rbx, 0x00
        int 0x80	;exit  