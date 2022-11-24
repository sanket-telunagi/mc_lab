// 1. LED Flashing

#include "reg51.h"
    void
    msdelay(unsigned int time);
void main()
{
    while (1)
    {
        P0 = 0x0FF;
        msdelay(100);
        P0 = 0x00;
        msdelay(100);
    }
}
void msdelay(unsigned int time)
{
    unsigned int i, j;
    for (i = 0; i < time; i++)
        for (j = 0; j < 1275; j++)
            ;
}



// 2. Anticlockwise counter

#include "reg51.h"
    void
    msdelay(unsigned int time);
void main()
{
    unsigned char z;
    while (1)
    {
        for (z = 0; z <= 7; z++)
        {
            P2 = 0x01 << z;
            msdelay(100);
        }
    }
}
void msdelay(unsigned int time)
{
    unsigned int i, j;
    for (i = 0; i < time; i++)
        for (j = 0; j < 1275; j++)
            ;
}



// 3. Clockwise counter

#include "reg51.h"
    void
    msdelay(unsigned int time);
void main()
{
    unsigned char z;
    while (1)
    {
        for (z = 0; z <= 7; z++)
        {
            P2 = 0x080 >> z;
            msdelay(100);
        }
    }
}
void msdelay(unsigned int time)
{
    unsigned int i, j;
    for (i = 0; i < time; i++)
        for (j = 0; j < 1275; j++)
            ;
}



// 4. Hexadecimal Counter

#include "reg51.h"
    void
    msdelay(unsigned int time);
void main()
{
    unsigned char z;
    while (1)
    {
        for (z = 0; z <= 255; z++)
        {
            P2 = z;
            msdelay(100);
        }
    }
}
void msdelay(unsigned int time)
{
    unsigned int i, j;
    for (i = 0; i < time; i++)
        for (j = 0; j < 1275; j++)
            ;
}



// 5. ASCII Counter

#include "reg51.h"
    void
    msdelay(unsigned int time);
void main()
{
    unsigned char z;
    while (1)
    {
        for (z = 'A'; z <= 'Z'; z++)
        {
            P2 = z;
            msdelay(100);
        }
    }
}
void msdelay(unsigned int time)
{
    unsigned int i, j;
    for (i = 0; i < time; i++)
        for (j = 0; j < 1275; j++)
            ;
}



// 6. BCD Counter

#include "reg51.h"
    void
    msdelay(unsigned int);
void main()
{
    unsigned char z, i;
    while (1)
    {
        for (z = 1; z <= 9; z++)
        {
            for (i = 1; i <= 9; i++)
            {
                P2 = z << 4 | i;
                msdelay(100);
            }
        }
    }
}
void msdelay(unsigned int time)
{
    unsigned int i, j;
    for (i = 0; i < time; i++)
        for (j = 0; j < 1275; j++)
            ;
}
