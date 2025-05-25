```bash
	AREA mydata,data,READONLY
	EXPORT __Vectors
__Vectors
	DCD 0x20000000
	DCD Reset_Handler
	AREA mycode,code,readonly
	EXPORT Reset_Handler
ENTRY
Reset_Handler
	MOV R2,#0;zeros
	MOV R3,#0;ones
	MOV R7,#2;data counter
	LDR R6,=VALUE
L 	MOV R1,#32;0x20
	LDR R0,[R6],#4;post index instruction
L0	MOVS R0,R0,ROR #1
	BHI ONES
ZEROS 
	ADD R2,R2,#1
	B L2
ONES
	ADD R3,R3,#1
L2	SUBS R1,R1,#1
	BNE L0
	SUB R7,R7,#1
	CMP R7,#0
	BNE L
HERE B HERE
VALUE DCD 0x11111111,0xAA55AA55
	END
```
