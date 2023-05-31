#include <stdio.h>

struct wp_char {
    char wp_cval;
    char wp_font;
    short wp_psize;
};

struct {
    char* s;
}this_string;

struct car {
    struct Engine {
        char* engine_type;
        int hp;
    };
    char license_plate[20];
};

int main() {
    struct car *ferrari;
    ferrari->license_plate[5] = "4";

    this_string.s = "word";
    while(*this_string.s != '\0') {
        printf("Char is: %c \n", *this_string.s);
        this_string.s++;
    }

    char* str = "Hello";
    char* s = str;
    while(*s != '\0') {
        printf("Char is %c \n", *s);
        *s++;
        s++;
    }

    struct wp_char x, y;

    s = str;
    while(*s != '\0') {
        printf("Char is %c \n", *s);
        *s++;
        s++;
    }
    
    return 0;
}
