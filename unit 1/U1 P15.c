        // Enter a string and find out how many spaces and vowels in the string.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int spaces = 0, vowels = 0, i;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if(ch == ' ') {
            spaces++;
        } else if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    printf("Spaces: %d\n", spaces);
    printf("Vowels: %d\n", vowels);

    return 0;
}
