// pointers.c
#include <stdio.h>

void traverse(int *, int *);

int main()
{
    int list[4] = {3, 5, 7, 11};
    int *last = &list[3];
    int *first = &list[0];
    traverse(first, last);

    float fl[2] = {3.5, 9.4};
    float *p1, *p2;
    p1 = fl;
    p2 = &fl[0];
    printf("P1: %f P2: %f\n", *p1, *p2);

    // Interacting with specific memory location
    int *ip;
    ip = (int *)6;
    *ip = 0xFF;

    return 0;
}

void traverse(int *pointer, int *last)
{
    for(; pointer <= last; pointer++)
        printf("Number: %d\n", *pointer);
}

// charhandling.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char in_line[100];
    char *cp;
    int c;

    cp = in_line;
    while((c = getc(stdin)) != EOF)
    {
        if(cp == &in_line[99] || c == '\n')
        {
            *cp = 0;
            if(strcmp(in_line, "stop") == 0)
                exit(EXIT_SUCCESS);
            else
                printf("line was %d characters long\n", (int)(cp-in_line));
            cp = in_line;
        }
        else
            *cp++ = c;
    }

    int i;
    char *cc;

    printf("This here? \n");
    cc = "this is a string";
    while(*cc != 0)
    {
        putchar(*cc);
        cc++;
    }

    exit(EXIT_SUCCESS);
}

// helper.c
#include <stdio.h>
#include <string.h>

int generate_numbers()
{
   return 39839;
}

char * generate_string()
{
    return "some string";
}

// helper.h
int generate_numbers();
char * generate_string();
