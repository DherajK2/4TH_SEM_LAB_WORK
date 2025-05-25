```bash
	AREA mudata,data,readonly
		EXPORT __Vectors
__Vectors
	DCD 0x20000000
	DCD Reset_Handler
	AREA mycode,code,readonly
	EXPORT Reset_Handler
ENTRY
Reset_Handler
	MOV R1,#0x00000006
	MOV R2,#0x00000004
	AND R3,R1,R2
	ORR R4,R1,R2
	EOR R5,R1,R2
	BIC R6,R1,R2 
	
	
HERE B HERE
	END
```
