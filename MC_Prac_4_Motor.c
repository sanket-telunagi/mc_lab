// Rotating motor in clockwise direction without timer –

void msdelay(unsigned int time){
	unsigned int i,j;
	for(i = 0 ; i <= time; i++){
		for(j = 0 ; j <= 1275; j++);
	}
}

void main(){
	unsigned int STEP_CLK[4] = {0x09,0x0C,0x06,0x03};
	unsigned int i;
	while(1){
		for(i = 0 ; i < 4; i++){
		P2 = STEP_CLK[i];
		msdelay(10);
		}
	}
}

// Rotating motor in Anti-clockwise  direction without timer –

#include "reg51.h"
void msdelay(unsigned int time){
	unsigned int i,j;
	for(i = 0 ; i <= time; i++){
		for(j = 0 ; j <= 1275; j++);
	}
}
void main(){
	unsigned int STEP_CLK[4] = {0x09,0x0C,0x06,0x03};
	unsigned int i;
	while(1){
		for(i = 3 ; i >= 0; i--){
			P2 = STEP_CLK[i];
			msdelay(10);
		}
	}
}

// Rotating motor in clockwise direction with timer – 

#include "reg51.h"
void TimerDelay(){
	TMOD = 0x01;
	TL0 = 0x00;
	TH0 = 0x0DC;
	TR0 = 0x01;
	while(TF0 == 0){};
	TR0 = 0x00;
	TF0 = 0x00;	
}
void main(){
	unsigned int STEP_CLK[4] = {0x09,0x0C,0x06,0x03};
	unsigned int i;
	while(1){
		for(i = 0 ; i < 4; i++){
			P2 = STEP_CLK[i];
			TimerDelay();
		}
	}
}


// Rotating motor in Anti-clockwise direction with timer –

#include "reg51.h"
void TimerDelay(){
	TMOD = 0x01;
	TL0 = 0x00;
	TH0 = 0x0DC;
	TR0 = 0x01;
	while(TF0 == 0){};
	TR0 = 0x00;
	TF0 = 0x00;	
}
void main(){
	unsigned int STEP_CLK[4] = {0x09,0x0C,0x06,0x03};
	unsigned int i;
	while(1){
		for(i = 3 ; i >= 0; i++){
			P2 = STEP_CLK[i];
			TimerDelay();
		}
	}
}