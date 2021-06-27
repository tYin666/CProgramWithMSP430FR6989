#include <msp430fr6989.h> // Register definitions
void main(void)
{
    unsigned short int i;
    WDTCTL = WDTPW + WDTHOLD;
    P1DIR = P1DIR | 0x01;
    P1REN = P1REN | 0x08;
    P1OUT = P1OUT | 0x08;
    while(1)
    {
        if (0x08 & P1IN)
        {
            P1OUT = P1OUT ^ 0x01;
            for(i=0 ; i<5000 ; i++);
        }
        else
        {
            P1OUT = P1OUT ^ 0x01;
            for(i=0 ; i<20000 ; i++);
        }
    }
}//end main()
