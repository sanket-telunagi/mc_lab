ORG 0000H  // starting memory location  // ORG start of program
	// 8-bit addition
	MOV A,#30H// '#' stands for direct value<destination>,<source>
	MOV B,#07H
	ADD A,B
	MOV 40H,A

	// 16 bit addition
	MOV A,#0CDH
	MOV B,#34H
	ADD A,B
	MOV 41H,A  // result of lower bit addition
	// MOV P1,41H // moving 41H to port p1
	MOV A,#0ABH
	MOV B,#12H
	ADDC A,B
	MOV 42H,A  // result of higher bit addition
	// MOV P2,42H

	// 8 bit subtraction
	MOV A,#30H
	MOV B,#10H
	CLR C // clearing previously generated carry
	SUBB A,B // Subtraction command
	MOV 43H,A

	// 16 bit subtraction
	MOV A,#0CDH
	MOV B,#34H
	CLR C // clearing previously generated carry
	SUBB A,B // Subtraction command // lower bits
	MOV 44H,A
	MOV A,#0ABH
	MOV B,#12H
	SUBB A,B // Subtraction command  // Higher bits
	MOV 45H,A
	
	// 8 bit multiplication
	// only works with resistors A,B
	MOV A,#0AH
	MOV B,#03H
	MUL AB
	MOV 46H,A 
	
	// DIVISION of 8-bit numbers
	// Quotient in A and Remainder in B
	MOV A,#0CDH// '#' stands for direct value // MOV //<destination>, <source>
	MOV B,#0ABH
	DIV AB
	
	MOV 47H,A
	MOV 48H,B
END // end of program
