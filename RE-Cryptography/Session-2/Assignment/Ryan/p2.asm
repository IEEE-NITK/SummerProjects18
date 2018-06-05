;program to add the corresponding elements of two arrays and store the sums in an array called result


SECTION .data
	arr1 dd 5,7,3,6,2,3,6	;values in array1
	arr2 dd 3,6,3,4,5,6,3	;value in array2
	result times 7 dd 0	;stores the results of the corresponding sums
	
SECTION .bss

SECTION .text
	global _start
_start:
	lea esi, [arr1]		;load the address of the arrays into esi, edi, ebx
	lea edi, [arr2]
	lea ebx, [result]


	mov ecx,7 		;the number of elements is stored in ecx and this acts as counter for the loop

label:
	mov eax,[esi]		;value of the arr1 is stored in eax
	add eax,[edi]		;value of arr2 is added to eax
	mov [ebx],eax		;eax value is moved to the result array

	add ebx,4		;move on to the next element of the arrays
	add esi,4
	add edi,4	
	loop label
	
	;the sums are stored in the result array

        mov rax, 0x01           ; 0x01 is the system call number for exit()
        mov rbx, 0x00           ; 0 is the argument for the syscall
        int 0x80                ; Issue a software interrupt


