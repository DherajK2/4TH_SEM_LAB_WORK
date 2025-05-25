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
	MOV R1,#0x0B
	MOV R2,#0x09
	ADD R3,R1,R2
	ADC R4,R1,R2
	ADDS R5,R1,R2
	SUBS R6,R1,R2 
	RSB R7,R1,R2
	SBC R8,R1,R2
	
HERE B HERE
	END
	
```
