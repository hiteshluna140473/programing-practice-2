/*--------Enter N elements and find how many are positive, negative, even and odd.---------*/

#include <stdio.h>

int main() {
    int n, number;
    int positive_count = 0, negative_count = 0, even_count = 0, odd_count = 0;


    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);


    for (int i = 0; i < n; i++) {
        scanf("%d", &number);


        if (number > 0) {
            positive_count++;
        } else if (number < 0) {
            negative_count++;
        }

        if (number % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("\nResults:\n");
    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);

    return 0;
}

