.MODEL SMALL
.STACK 100H
.DATA

MSG01 DB ' 00000   $'
MSG02 DB '0     0  $'

MSG91 DB '9999999  ',10,13,'$'
MSG92 DB '9     9  ',10,13,'$'
MSG93 DB '      9  ',10,13,'$'

NL DB 10,13,'$'

.CODE
MAIN PROC

    MOV AX,@DATA
    MOV DS,AX 
    
    ;PRINT MSG01
    MOV AH,9
    LEA DX,MSG01
    INT 21H
    
    ;PRINT MSG91
    MOV AH,9
    LEA DX,MSG91
    INT 21H
    
    ;PRINT NL
    MOV AH,9
    LEA DX,NL
    INT 21H 
    
    ;PRINT MSG02
    MOV AH,9
    LEA DX,MSG02
    INT 21H
    
    ;PRINT MSG92
    MOV AH,9
    LEA DX,MSG92
    INT 21H
    
    ;PRINT NL
    MOV AH,9
    LEA DX,NL
    INT 21H
        
    ;PRINT MSG02
    MOV AH,9
    LEA DX,MSG02
    INT 21H
    
    ;PRINT MSG91
    MOV AH,9
    LEA DX,MSG91
    INT 21H
    
    ;PRINT NL
    MOV AH,9
    LEA DX,NL
    INT 21H
        
    ;PRINT MSG02
    MOV AH,9
    LEA DX,MSG02
    INT 21H
    
    ;PRINT MSG93
    MOV AH,9
    LEA DX,MSG93
    INT 21H
    
    ;PRINT NL
    MOV AH,9
    LEA DX,NL
    INT 21H
    
    ;PRINT MSG01
    MOV AH,9
    LEA DX,MSG01
    INT 21H
    
    ;PRINT MSG91
    MOV AH,9
    LEA DX,MSG91
    INT 21H 
    
       
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN