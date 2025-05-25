```
    AREA mydata, DATA, READONLY
    EXPORT __Vectors
__Vectors
    DCD 0x20000000
    DCD Reset_Handler

    AREA mycode, CODE, READONLY
    EXPORT Reset_Handler
ENTRY
Reset_Handler
   MOV R0,#0xFF00
   MOV R1,#0x1234
   MUL R2,R0,R1
   LDR R3,=0x12345678
   LDR R4,=0x87654321
   UMULL R5,R6,R3,R4
   NOP
   
HERE B HERE
	END
```
