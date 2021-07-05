// Program to look at couting in binary and learn new features in CCS

#include <msp430.h> // Used to make code easier to read

#define DEVELOPMENT 0x5A80  //Used to disable watchdog timer for development

main()
{
    WDTCTL = DEVELOPMENT; // Disable watchdog timer for development

    long count = 0;

    while(count<20)
    {
        count = count + 1;
    }

    while (1);
}
