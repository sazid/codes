.MODEL SMALL
.STACK 100H
.DATA

MSG1 DB '##########$'

.CODE
MAIN PROC

    MOV AX,@DATA
    MOV DS,AX 
    
    ;PRINT MSG1
    MOV AH,9
    LEA DX,MSG1
    INT 21H
        
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
        
    ;PRINT NEWLINE
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13  
    INT 21H
    
    
       
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN