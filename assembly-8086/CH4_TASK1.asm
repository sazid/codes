.MODEL SMALL
.STACK 100H
.DATA

MSG1 DB 'The sum of $'
MSG2 DB ' and $'
MSG3 DB ' is $'

.CODE
MAIN PROC

    MOV AX,@DATA
    MOV DS,AX
    
    ;PRINT ?
    MOV AH,2
    MOV DL,'?'
    INT 21H
    
    ;INPUT TWO NUMBERS
    MOV AH,1
        INT 21H
        MOV BL,AL

        INT 21H
        MOV CL,AL
        
        
    ;PRINT NEWLINE
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H
        
    
    ;PRINT MSG1
    MOV AH,9
    LEA DX,MSG1
    INT 21H
    
    ;PRINT 
    MOV AH,2
    MOV DL,BL
    INT 21H
    
    ;PRINT MSG2
    MOV AH,9
    LEA DX,MSG2
    INT 21H
    
    
    ;PRINT 
    MOV AH,2
    MOV DL,CL
    INT 21H
    
    ;PRINT MSG3
    MOV AH,9
    LEA DX,MSG3
    INT 21H
    
    ;ADD
    ADD CL,BL
    SUB CL,48
 
    ;PRINT 
    MOV AH,2
    MOV DL,CL
    INT 21H   
   
    
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN