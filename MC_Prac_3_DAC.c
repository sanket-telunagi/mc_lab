// Square Wave – 

#include<reg51.h>
void msdelay(unsigned int time){
	unsigned int i,j;
	for(i=0;i<time;i++){
			for(j=0;j<1275;j++);
	}
}
void main(){
	while(1){
		P0 = 0x00;
		msdelay(100);
		P0 = 0x0FF;
		msdelay(100);
	}
}

// Triangular Wave – 
#include<reg51.h>
void main(){
	unsigned int i;
	while(1){
		for(i=0;i<255;i++){
		P1=i;
		}
		for(i=255;i>0;i--){
			P1=i;
		}
	}
}

// Sine Wave – 
#include<reg51.h>
void main(){
unsigned int i;
unsigned int sine[12]={128,192,238,255,238,192,128,64,17,0,17,64};
while(1){
	for(i=0;i<12;i++){
		P0=sine[i];
	}
}
}

// Saw Tooth Wave – 
 
#include<reg51.h>
void main(){
unsigned int i;
while(1){
	for(i=0;i<255;i++){
		P0=i;
	}
}
}
