    //Enter a string and print it in reverse order with using string function and without string function.


#include <stdio.h>
#include <string.h>

int main() {
    char str[100], tempStr[100];
    int i, j, len;

    printf("Enter a string: ");
    gets(str);
    strcpy(tempStr, str);


    strrev(tempStr);
    printf("Reversed (with function): %s\n", tempStr);

    len = strlen(str);
    printf("Reversed (without function): ");
    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
