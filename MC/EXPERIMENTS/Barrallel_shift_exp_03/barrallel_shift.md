## 2. Develop and simulate ARM ALP for demonstrate the Barrel Shifter operation (LSL, ASR, LSR, ROR)


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
	MOV R0,#0x00000008
	MOV R1,R0,LSL #2
	MOV R2,R0,LSR #2
	MOV R3,R0,ASR #2
	MOV R4,R0,ROR #2

	
	
HERE B HERE
	END
```
