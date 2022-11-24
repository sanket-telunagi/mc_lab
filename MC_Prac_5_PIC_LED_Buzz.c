// Code for interfacing LED, Buzzer, Relay with PIC18F4550.
#include <p18f4550.h>
void timer_isr(void);
extern void _startup(void);
#pragma code RESET_INTERRUPT_VECTOR = 0x1000
void reset(void)
{
    _asm 
    goto _startup
    _endasm
}
#pragma code

#pragma code HIGH_INTERRUPT_VECTOR = 0x1008
void high_ISR(void)
{
    _asm 
    goto timer_isr
    _endasm // The program is relocated to execute the           // interrupt routine timer_iser
}
#pragma code

// This function is executed as soon as the timer interrupt is generated due to timer overflow
#pragma interrupt timer_isr
void timer_isr(void)
{

    PORTDbits.RD0 = ~PORTDbits.RD0; // Toggle the PORTB led out RB0 - RB3
    INTCONbits.TMR0IF = 0;          // Resetting the timer overflow interrupt flag
    TMR0H = 0X6D;                   // Reloading the timer values after overflow
    TMR0L = 0X75;
}

void main()
{
    TRISDbits.RD0 = 0;
    PORTDbits.RD0 = 0;
    T0CON = 0x03; // Set the timer to 16-bit mode,
                  // internal instruction cycle clock,1:16 prescaler
    TMR0H = 0x6D; // Reset Timer0 to 0x48E5 TO MAKE DELAY OF 1s
    TMR0L = 0x75;
    INTCONbits.GIE = 1;    // Global interrupt enabled
    INTCONbits.TMR0IE = 1; // TMR0 interrupt enabled
    T0CONbits.TMR0ON = 1;  // Start timer0
    while (1)
        ;
}
