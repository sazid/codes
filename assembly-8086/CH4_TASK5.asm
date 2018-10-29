.MODEL SMALL
.STACK 100H
.DATA

MSG1 DB '#######$'
MSG2 DB '##$'
MSG DB 'Enter Three Initials: $'

X DB ?
Y DB ?
Z DB ?

.CODE
MAIN PROC

    MOV AX,@DATA
    MOV DS,AX
    
    ;INPUT MSG
    MOV AH,9
    LEA DX,MSG
    INT 21H
    
    MOV AH,1
    INT 21H
    MOV X,AL
    INT 21H
    MOV Y,AL
    INT 21H
    MOV Z,AL
    
        
    ;PRINT NEWLINE
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H 
    
    ;1
    MOV AH,9
    LEA DX,MSG1
    INT 21H
        
    ;PRINT NEWLINE
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H 
    
    ;2
    MOV AH,9
    LEA DX,MSG1
    INT 21H
        
    ;PRINT NEWLINE
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13  
    INT 21H    
    
    ;3
    MOV AH,9
    LEA DX,MSG1
    INT 21H
        
    ;PRINT NEWLINE
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H 
    
    ;4
    MOV AH,9
    LEA DX,MSG2
    INT 21H    
    
    MOV AH,2
    MOV DL,X
    INT 21H
    MOV DL,Y
    INT 21H
    MOV DL,Z
    INT 21H
    
    ;4
    MOV AH,9
    LEA DX,MSG2
    INT 21H 
        
    ;PRINT NEWLINE
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13  
    INT 21H
    
    ;5
    MOV AH,9
    LEA DX,MSG1
    INT 21H
        
    ;PRINT NEWLINE
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H 
    
    ;6
    MOV AH,9
    LEA DX,MSG1
    INT 21H
        
    ;PRINT NEWLINE
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13  
    INT 21H
    
    ;7
    MOV AH,9
    LEA DX,MSG1
    INT 21H
  
    
       
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN