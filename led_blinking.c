#include <reg51.h>

sbit LED1 = P1^0; // Define LED1 pin
sbit LED2 = P1^1; // Define LED2 pin
sbit LED3 = P1^2; // Define LED3 pin
sbit LED4 = P1^3; // Define LED4 pin
sbit LED5 = P1^4; // Define LED5 pin
sbit LED6 = P1^5; // Define LED6 pin
sbit LED7 = P1^6; // Define LED7 pin
sbit LED8 = P1^7; // Define LED8 pin

void delay(unsigned int count)
{
    unsigned int i, j;
    for (i = 0; i < count; i++)
        for (j = 0; j < 1000; j++);
}

void main()
{
    unsigned int i;

    while (1)
    {
        for (i = 1; i <= 8; i++)
        {
            if (i % 2 == 0) // Check if the number is even
            {
                LED1 = LED3 = LED5 = LED7 = 0; // Turn off odd LEDs
                LED2 = LED4 = LED6 = LED8 = 1; // Turn on even LEDs
            }
            else
            {
                LED1 = LED3 = LED5 = LED7 = 1; // Turn on odd LEDs
                LED2 = LED4 = LED6 = LED8 = 0; // Turn off even LEDs
            }
            delay(500); // Delay for 500 milliseconds
        }
    }
}
