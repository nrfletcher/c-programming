#include <stdio.h>
#include <stdlib.h>

int string_equality(char *, char *);
char *first_occurence(char *, char);
char *substring_find(char *, char *);

int main() {

    char *string1 = "this";
    char *string2 = "this";
    char *string3 = "that";

    printf("%d \n", string_equality(string1, string2));
    printf("%d \n", string_equality(string2, string3));

    char *occurence_string = "findA";

    printf("First occurence of 'A' is: %d \n", first_occurence(occurence_string, 'A'));

    char *sub = "Hi";
    char *finder = "ThHiMo";
    printf("Substring at position: %d \n", substring_find(sub, finder));

    char *sub = "Hi";
    char *finder = "ThHiMo";
    printf("Substring at position: %d \n", substring_find(sub, finder));

    return 0;
}

int string_equality(char *s1, char *s2) {
    /*  Define two pointers we can use to iterate
        Check if either pointer is the null terminating end of string
        If the pointers do not match, return the difference between the chars
        Increase each pointer iterating through both strings
        If both reach the null terminating without differing we return 0 */
    char *p1 = s1;
    char *p2 = s2;

    while(*p1 != '\0' || *p2 != '\0') {
        if(*p1 != *p2) return (*p1 - *p2);
        p1++;
        p2++;
    }

    return 0;
}

char *first_occurence(char *string, char ch) {
    /*  Create pointer to first character
        So long as character isn't null terminator, continue
        If we find the char, return the pointer to it, if not, 0 */
    char *ptr = string;
    while(*ptr != '\0') {
        if(*ptr == ch) return ptr;
        ptr++;
    }

    return 0;
}

char *substring_find(char *s1, char *s2) {
    /*  Set temp pointer to start of s1
        Use pos to track location of substring start */
    char *tmp = s1;
    int pos = 0;

    while(*s2 != '\0') {
        while(*tmp == *s2) {
            pos++;
            tmp++;
            s2++;
            if(*tmp == '\0') return (pos);
            if(*s2 == '\0') return 0;
        }
        pos = 0;
        tmp = s1;
        s2++;
    }

    return 0;
}
