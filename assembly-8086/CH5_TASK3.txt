.MODEL SMALL
.STACK 100H
.DATA

MSG1 DB 'The Sum of $'
MSG2 DB ' and $'
MSG3 DB ' is $'
MSG4 DB ' (using ADD). However, if we multiply $'
MSG5 DB ' the product will be $'
MSG6 DB ' (using MUL). On the other hand if we subtract $'
MSG7 DB ', the result will be $'
MSG8 DB ' (using SUB)$'


X DB ?
Y DB ?

.CODE
MAIN PROC

    MOV AX,@DATA
    MOV DS,AX
    
    ;TAKE INPUT
    MOV AH,2
    MOV DL,'?'
    INT 21H
    
    ;INPUT X
    MOV AH,1
    INT 21H
    MOV X,AL
    
    ;INPUT Y
    MOV AH,1
    INT 21H
    MOV Y,AL
    
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

    ;PRINT X
    MOV AH,2
    MOV DL,X
    INT 21H
    
    ;PRINT MSG2
    MOV AH,9
    LEA DX,MSG2
    INT 21H
    
    ;PRINT Y
    MOV AH,2
    MOV DL,Y
    INT 21H
    
    ;PRINT MSG3
    MOV AH,9
    LEA DX,MSG3
    INT 21H
    
    MOV BL,X
    MOV BH,Y
    ADD BL,BH
    SUB BL,48
    
    MOV AH,2
    MOV DL,BL
    INT 21H
    
    ;PRINT MSG4
    MOV AH,9
    LEA DX,MSG4
    INT 21H
    
    ;PRINT X
    MOV AH,2
    MOV DL,X
    INT 21H
    
    ;PRINT MSG2
    MOV AH,9
    LEA DX,MSG2
    INT 21H
    
    ;PRINT Y
    MOV AH,2
    MOV DL,Y
    INT 21H
    
    ;PRINT MSG5
    MOV AH,9
    LEA DX,MSG5
    INT 21H
    
    ;MULTIPLY
    ;MOV BL,X
    ;SUB BL,48
    ;MOV BH,Y
    ;SUB BH,48
    ;MUL BL,BH  ------ here
 
    MOV AH,2
    MOV DL,'X'
    INT 21H
    
    ;PRINT MSG6
    MOV AH,9
    LEA DX,MSG6
    INT 21H
    
    ;PRINT X
    MOV AH,2
    MOV DL,X
    INT 21H
    
    ;PRINT MSG2
    MOV AH,9
    LEA DX,MSG2
    INT 21H 
    
    ;PRINT Y
    MOV AH,2
    MOV DL,Y
    INT 21H 
    
    
    ;PRINT MSG7
    MOV AH,9
    LEA DX,MSG7
    INT 21H    
    
    MOV BL,X
    MOV BH,Y
    SUB BL,BH
    ADD BL,48
    
    
    MOV AH,2
    MOV DL,BL
    INT 21H
    
    ;PRINT MSG8
    MOV AH,9
    LEA DX,MSG8
    INT 21H  
    
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN