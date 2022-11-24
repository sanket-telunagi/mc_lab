/*
    Q.1)	Write a program 
    to move values from memory locations (30H – 39H) to (40H – 49H)
*/

ORG 000H;                // Memory Origin
		MOV R0,#30H;         // R0 = 39H
		MOV R1,#40H;         // R1 = 40H
		MOV R2,#10;          // R2 = 10
	
		AGAIN:MOV A,@R0;     // value at R0 into A
		MOV @R1,A;           // Content of A to value at R1
		INC R0;              // Incement R0
		INC R1;              // Increment R1
		DJNZ R2,AGAIN ;      // Repeat untill R2 is zero
END;

#include "reg51.h"

void main() {
	unsigned char *src,*dest,i ;
	src = 0x30;
	dest = 0x40;
	for (i=0;i<10;i++){
			*dest = *src ;
			dest++;
			src++;
    }
}



/*
    Q.2)	Write a program 
            to move values from memory locations (30H – 39H) to (35H – 3EH)
*/

ORG 000H;                // Memory Origin
	MOV R0,#39H;         // R0 = 39H
	MOV R1,#3EH;         // R1 = 3EH
	MOV R2,#10;          // R2 = 10

	AGAIN:MOV A,@R0;     // value at R0 into A
	MOV @R1,A;           // Content of A to value at R1
	DEC R0;              // Decrement R0
	DEC R1;              // Decrement R1
	DJNZ R2,AGAIN ;      // Repeat untill R2 is zero
END;

#include "reg51.h"

void main() {
	unsigned char *src,*dest,i ;
	src = 0x39;
	dest = 0x3E;
	for (i=0;i<10;i++){
			*dest = *src ;
			dest--;
			src--;
	}
}


/*
    Q.3)	Write a program to 
            move values from memory locations (30H – 39H) to (2BH – 34H)
*/

ORG 000H;                // Memory Origin
	
	MOV R0,#30H;         // R0 = 30H
	MOV R1,#2BH;         // R1 = 2BH
	MOV R2,#10;          // R2 = 10
	
	AGAIN:MOV A,@R0;     // value at R0 into A
	MOV @R1,A;           // Content of A to value at R1
	INC R0;              // Incement R0
	INC R1;              // Increment R1
	DJNZ R2,AGAIN ;      // Repeat untill R2 is zero

END;

#include "reg51.h"

void main() {
	unsigned char *src,*dest,i ;
	src = 0x30;
	dest = 0x2B;
	for (i=0;i<10;i++){
			*dest = *src ;
			dest++;
			src++;
    }
}

