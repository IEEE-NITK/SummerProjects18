12a. the smallest input length which can give sgfault is 121 characters.

12b.the smallest input length that can give sg fault is 108 cgaarcters.

12c.
yes
code12_1 gives the followoing error:
Segmentation fault (core dumped)

code12_2 gives the following error:
*** stack smashing detected ***: <unknown> terminated
Aborted (core dumped)

12d.the flag prevents protects the stack from being overwritten?

12e.yes,there is a difference in the disassemblies of func1 in case of both the executables.

 0x0000000000000717 <+8>:	mov    rax,QWORD PTR fs:0x28
   0x0000000000000720 <+17>:	mov    QWORD PTR [rbp-0x8],rax
   0x0000000000000724 <+21>:	xor    eax,eax


these instructions are present in the beginning of disassembly of func1 in case of code12_2,but not in code12_1_

 0x0000000000000750 <+65>:	mov    rax,QWORD PTR [rbp-0x8]
   0x0000000000000754 <+69>:	xor    rax,QWORD PTR fs:0x28
   0x000000000000075d <+78>:	je     0x764 <func1+85>
   0x000000000000075f <+80>:	call   0x5b0 <__stack_chk_fail@plt>
nd these instructions at the end of disassembly of func1 in code12_2

  







