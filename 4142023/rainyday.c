#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Trying some new stuff -> structs, malloc, free, strcpy

struct Ferrari {
    char *licensePlate;
    int topSpeed;
};

struct Lamborghini {
    char *licensePlate;
    int topSpeed;
};

void stringReplace(char *);
void stringReplacePointer(char **);

int main() {
        
    struct Ferrari Berlinetta;
    struct Lamborghini Aventador;

    Berlinetta.licensePlate = malloc(sizeof(char) * 8);
    Aventador.licensePlate = malloc(sizeof(char) * 9);

    strcpy(Berlinetta.licensePlate, "2LJ00PA");
    strcpy(Aventador.licensePlate, "9YVG340L");

    Berlinetta.topSpeed = 195;
    Aventador.topSpeed = 205;

    if(Berlinetta.topSpeed > Aventador.topSpeed) {
        printf("The faster cars license plate is %s\n", Berlinetta.licensePlate);
    } else {
        printf("The faster cars license plate is %s\n", Aventador.licensePlate);
    }

    free(Berlinetta.licensePlate);
    free(Aventador.licensePlate);

    const char *exampleString = "This is a string";
    printf("Original: %s \n", exampleString);

    stringReplace(exampleString);
    printf("Changed: %s \n", exampleString);

    return 0;
}

void stringReplace(char string) {
    char **newString = &string;
    *newString = "Replaced placeholder";
}

// By using a pointer to a pointer, we are able to modify the pointer itself, thus altering the pointer to a new char array
void stringReplacePointers(char **stringPtr) {
    char *newString = "Replaced placeholder";
    *stringPtr = newString;
}
