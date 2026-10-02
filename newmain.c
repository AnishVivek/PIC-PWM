#include <xc.h>

#pragma config FOSC = HS
#pragma config WDTE = OFF
#pragma config PWRTE = OFF
#pragma config BOREN = ON
#pragma config LVP = OFF

void main()
{
    TRISCbits.TRISC2 = 0;
    T2CON = 0x05;
    CCPR1L = 0x3E;
    CCP1CON = 0x2C;
    PR2 = 249;
    while(1)
    {
    }
}
