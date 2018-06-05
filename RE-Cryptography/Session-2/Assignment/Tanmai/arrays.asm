section .data
    a db 1, 2, 3
    b db 4, 5, 6
    c times 3 db 0
    sum db 0
section .text
  global _start

  _start:
    mov r8, 3 ; 3 elemetns
    mov rax, a
    mov rbx, b
    mov rcx, c

    loop:
      add r9, [rax]
      add r9, [rbx]
      mov rcx, r9
      add rax, 1
      add rbx, 1
      add rcx, 1

      dec r8
      cmp r8, 0
      jg loop
    exit:
      mov eax, 0x01
      int 0x80
