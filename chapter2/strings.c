#include <stdio.h>
#include <string.h>

// Some fun string functions

void increment(int value);
void decrement(int value);
void squeeze(char s[], int c);
void print_string(char s[]);
void which_string_larger(char s[], char st[]);
void squeeze_2(char s1[], char s2[]);
int any(char s1[], char s2[]);
int contains_char(char s[], char c);

int main()
{
    tests();
    return 1;
}

void which_string_larger_test()
{
    char s[] = "Hello World!";
    char st[] = "Shorter";

    print_string(s);
    which_string_larger(st, s);
}

void squeeze_2_test()
{
    char squeeze_test1[] = "z";
    char squeeze_test2[] = "Hzezlloz Wzorzld!z";
    squeeze_2(squeeze_test2, squeeze_test1);
    print_string(squeeze_test2);
}

void squeeze_2(char s1[], char s2[])
{
    int pos = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (contains_char(s2, s1[i]) == 1) continue;
        s1[pos] = s1[i];
        pos++;
    }
    s1[pos] = '\0';
}

int any(char s1[], char s2[])
{
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (contains_char(s2, s1[i]) == 1) return i;
    }
    return -1;
}

void any_test()
{
    char s1[] = "Detect character";
    char s2[] = "Some character";
    printf("%d", any(s1, s2));
}

int contains_char(char s[], char c)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
            return 1;
    }
    return 0;
}

void increment(int value)
{
    value++;
}

void decrement(int value)
{
    value--;
}

void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
            s[j++] = s[i];
    }
    s[j] = '\0';
}

void print_string(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c\n", s[i]);
    }
}

void which_string_larger(char s[], char st[])
{
    int len_s = 0;
    int len_st = 0;

    for (int i = 0; s[i] != '\0'; i++)
        len_s++;

    for (int i = 0; st[i] != '\0'; i++)
        len_st++;

    if (len_s > len_st)
    {
        printf("First string longer \n");
    } else if (len_st > len_s)
    {
        printf("Second string longer \n");
    } else
    {
        printf("Equal lengths \n");
    }
}

void tests()
{
    which_string_larger_test();
    squeeze_2_test();
    any_test();
}
