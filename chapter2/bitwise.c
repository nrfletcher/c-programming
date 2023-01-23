#include <stdio.h>

// Bitwise fun stuff

int main()
{

    return 1;
}

int and(int a, int b)
{
    /*  12 = 00001100
        25 = 00011001

        if we AND these two bits (both must be 1 otherwise set bit to 0)

        00001000 = 8
    */
    return a & b;
}

int or(int a, int b)
{
    /*  12 = 00001100
        25 = 00011001

        if we OR these two bits (at least 1 bit must be set to 1)

        00011101 = 29
    */
    return a | b;
}

int xor(int a, int b)
{
    /*  12 = 00001100
        25 = 00011001

        if we XOR (exclusive or) two bits it returns 1 if bits are opposites, 0 otherwise

        00010101 = 21
    */
    return a ^ b;
}

int shifted(int a)
{
    /*  We can left << or right >> shift a value to shift it's bits by the denoted amount

        212 = 11010100
        212 >> 2 = 00110101
    */
    return a >> 2;
}

int complement(int a)
{
    return ~a;
}

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}

int bitcount(unsigned x)
{
    int b;

    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;
    return b;
}
