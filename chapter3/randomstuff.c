#include <stdio.h>
#include <string.h>

int main()
{
    printf("Hello World");
    goto_example();
    return -1;
}

int binary_search(char nums[], int target, int len)
{
    int low, high, mid;

    low = 0;
    high = len - 1;

    while (low <= high)
    {
        mid = high - (high + low) / 2;
        if (target < nums[mid])
            high = mid - 1;
        else if (target > nums[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

void goto_example()
{
    // The goto label method of breaking out of a loop or logical statements is seldom used, regardless this is it
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++) {
            if (1)
                goto modulo;
            printf("This will be skipped \n");
        }
        printf("This will also be skipped \n");
    }
    modulo:
        printf("Found a modulus equality \n");
}

void shell_short(int v[], int n)
{
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i-gap; j >= 0 && v[j] > v[j+gap]; j -= gap)
                {
                    temp = v[j];
                    v[j] = v[j+gap];
                    v[j+gap] = temp;
                }
}

int switch_statement()
{
    int c, i, nwhite, nother, ndigit[10];

    nwhite = nother = 0;

    for (int i = 0; i < 10; i++)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
            ndigit[c - '0']++;
            break;
        case ' ':
        case '\n':
        case '\t':
            nwhite++;
            break;
        default:
            nother++;
            break;
        }
    }
    printf("Digits = ");
    for (int i = 0; i < 10; i++)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d", nwhite, nother);
    return 0;
}

void reverse_string(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
