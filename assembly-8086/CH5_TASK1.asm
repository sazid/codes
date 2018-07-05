.MODEL SMALL
.STACK 100H
.DATA

MSG1 DB 'Enter First Digit X: $'
MSG2 DB 'Enter Second Digit Y: $'
MSG3 DB 'The Swapped Values are:$'
MSGX DB 'X = $'
MSGY DB 'Y = $'

X DB ?
Y DB ?

.CODE
MAIN PROC

    MOV AX,@DATA
    MOV DS,AX
    
    ;PRINT MSG1
    MOV AH,9
    LEA DX,MSG1
    INT 21H
    
    ;INPUT X
    MOV AH,1
    INT 21H
    MOV X,AL
    
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
    
    ;INPUT Y
    MOV AH,1
    INT 21H
    MOV Y,AL
    
    ;EXCHANGE X,Y
    MOV BL,X
    MOV CL,Y
    XCHG BL,CL
    MOV X,BL
    MOV Y,CL
    
    ;NEWLINE
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H
 
    ;PRINT MSG3
    MOV AH,9
    LEA DX,MSG3
    INT 21H   
            
    ;NEWLINE
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H
    
    ;PRINT MSGX
    MOV AH,9
    LEA DX,MSGX
    INT 21H   
    
    ;PRINT X
    MOV AH,2
    MOV DL,X
    INT 21H
    
    ;NEWLINE
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H    
    
    ;PRINT MSGY
    MOV AH,9
    LEA DX,MSGY
    INT 21H
    
    ;PRINT Y
    MOV AH,2
    MOV DL,Y
    INT 21H
    
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN