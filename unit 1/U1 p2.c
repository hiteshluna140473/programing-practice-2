//----------------------------2)Enter N elements and find total and average of them.-----------------------------//

#include <stdio.h>

int main()
{
    int n, i;
    float num[100], sum = 0.0, average;

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    while (n > 100 || n < 1)
        {
        printf("Error! number should be in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
        }

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; ++i)
        {
        printf("Number %d: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
        average = sum / n;
        }
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
