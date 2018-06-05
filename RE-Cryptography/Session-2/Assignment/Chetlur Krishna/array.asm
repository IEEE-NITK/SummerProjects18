section .data
     NUM1 DB 36H,55H,27H,42H
     NUM2 DB 38H,41H,29H,39H
     RESULT times 5 db 0 
ends
section .text
global _start
                               
_start
     
      MOV DS,AX
     
      MOV SI,NUM1
      MOV DI,NUM2
      mOV BX,RESULT
     
     
       MOV CX,5
LOOP1:      
       MOV AL,[SI]
                           
       ADD AL,[DI]
       MOV [BX],AL
            
       INC BX
       INC SI
       INC DI
      
       LOOP LOOP1   
     
      MOV AH,4CH
      INT 21H     

