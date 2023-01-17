#include <stdio.h>

// Program meant to determine the maximum values allowed by the C compiler for both signed and unsigned shorts and chars
// Results of program:
// Max unsigned short: 65535
// Max signed short: 32767
// Max unsigned char: 255
// Max signed char: 127
int main()
{
    unsigned short testMax = 10000;
    unsigned short saved = 0;

    while (1)
    {
        if (testMax < saved)
        {
            printf("Max short value: %d\n", saved);
            break;
        }
        saved = testMax;
        testMax++;
        printf("%d\n", testMax);
    }

    unsigned char testMaxChar = 0;
    unsigned char saveMaxChar = 0;

    while (1)
    {
        if (testMaxChar < saveMaxChar)
        {
            printf("Max char value: %d", saveMaxChar);
            break;
        }
        saveMaxChar = testMaxChar;
        testMaxChar++;
        printf("%d\n", testMaxChar);
    }

    signed short signedShort = 0;
    signed short signedShortSaver = 0;

    while (1)
    {
        if (signedShort < 0)
        {
            printf("Max signed short value: %d\n", signedShortSaver);
            break;
        }
        signedShortSaver = signedShort;
        signedShort++;
        printf("%d\n", signedShort);
    }

    signed char signedChar = 0;
    signed char signedCharSaver = 0;

    while (1)
    {
        if (signedChar < 0)
        {
            printf("Max signed char value: %d\n", signedCharSaver);
            break;
        }
        signedCharSaver = signedChar;
        signedChar++;
        printf("%d\n", signedChar);
    }
    printf("Max unsigned short: %d\n", saved);
    printf("Max signed short: %d\n", signedShortSaver);
    printf("Max unsigned char: %d\n", saveMaxChar);
    printf("Max signed char: %d\n", signedCharSaver);
}
