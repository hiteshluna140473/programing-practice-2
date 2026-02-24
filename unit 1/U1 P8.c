            //. Write a program to print 3 * 3 matrix.

#include <stdio.h>
#include <string.h>

int main() {
    char data[] = "1 2 3 4 5 6 7 8 9";
    char *token = strtok(data, " ");
    int count = 0;

    while (token != NULL) {
        printf("%4s", token);
        count++;
        if (count % 3 == 0) printf("\n");
        token = strtok(NULL, " ");
    }

    return 0;
}
