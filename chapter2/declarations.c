#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

strlen(char s[]);
bool isleapyear(int year);
int lower(int c);

enum names { Riley = 1, Beck, Robert, Mark, Phil, Casey, Colin};
// Acts similarly to that of #define, but will auto generate values after an initial definition (Beck is 2 and so on)

int main()
{
    enum names name = Colin;

    const double e = 2.718;
    const double pi = 3.1415;
    // Consts are similar to that of 'final' variables in Java (cannot be altered later)

    printf("This is name: %d\n", name);
    char a[20]= "Program";
    char b[20]= {'P','r','o','g','r','a','m','\0'};

    printf("Length of string a = %d \n", strlen(a));
    printf("Length of string b = %d \n", strlen(b));

    printf("Sqrt %f\n", sqrt((double) 36 ));

    return 0;
}

int strlen(char s[])
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        ++i;
    }
    return i;
}

bool isleapyear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is a leap year\n", year);
        return true;
    } else
    {
        printf("%d is not a leap year\n", year);
        return false;
    }
}

int lower(int c)
{
    // Utilizing ASCII int values, we are converting an uppercase char to a lowercase one
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        // If not an uppercase char, do nothing
        return c;
}
