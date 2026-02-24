               // Merge two arrays.

#include <stdio.h>
int main()
{
    int n1, n2, i;
    printf("Enter sizes of array 1 and 2: ");
    scanf("%d %d", &n1, &n2);
    int a[n1], b[n2], merged[n1 + n2];

    printf("Enter array 1: ");
    for(i = 0; i < n1; i++) { scanf("%d", &a[i]); merged[i] = a[i]; }
    printf("Enter array 2: ");
    for(i = 0; i < n2; i++) { scanf("%d", &b[i]); merged[n1 + i] = b[i]; }

    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++) printf("%d ", merged[i]);
    return 0;
}

