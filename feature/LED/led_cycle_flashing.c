#include <STC89.h>
#include <delay.h>

void main(void)
{
    while(1)
    {
        P2 = 0xFE;
        Delay(500);
        P2 = 0xFF;
        Delay(500);
    }
}