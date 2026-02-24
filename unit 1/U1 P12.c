        //Enter your name and print it vertically.

#include <stdio.h>

int main() {
    char name[50];
    int i = 0;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("\nYour name printed vertically:\n");

    while (name[i] != '\0') {
        printf("%c\n", name[i]);
        i++;
    }

    return 0;
}

