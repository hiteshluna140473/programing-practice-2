        //Enter a string and find out length of string with using string function and without string function.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    size_t length;

    length = strlen(str);

    printf("The string is: \"%s\"\n", str);
    printf("Length of the string using strlen(): %zu\n", length);

    return 0;
}

