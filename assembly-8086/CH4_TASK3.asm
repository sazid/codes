.MODEL SMALL
.STACK 100H
.DATA

MSG1 DB 'Enter a HEX digit: $'
MSG2 DB 'The Decimal value of $'
MSG3 DB ' is: $'

.CODE
MAIN PROC

    MOV AX,@DATA
    MOV DS,AX 
    
    ;PRINT MSG1
    MOV AH,9
    LEA DX,MSG1
    INT 21H
    
    ;INPUT DIGIT
    MOV AH,1
    INT 21H     
    MOV BL,AL
        
    ;PRINT NEWLINE
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H
    
    ;PRINT MSG2
    MOV AH,9
    LEA DX,MSG2
    INT 21H
    
    ;PRINT A 
    MOV AH,2
    MOV DL,BL
    INT 21H
    
    ;PRINT MSG3
    MOV AH,9
    LEA DX,MSG3
    INT 21H
   
    ;PRINT 1A 
    MOV AH,2
    MOV DL,'1'
    INT 21H
    
    SUB BL,17
    MOV DL,BL
    INT 21H
       
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN