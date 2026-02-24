/*-----------Copy the elements of one array into another-------------*/
#include <stdio.h>

int main()
{
    int source_array[] ={10, 20, 30, 40, 50};
    int n = sizeof(source_array) / sizeof(source_array[0]);
    int destination_array[n];

    for (int i = 0; i < n; i++)
        {
        destination_array[i] = source_array[i];
        }

    printf("Source array: ");
    for (int i = 0; i < n; i++)
        {
        printf("%d ", source_array[i]);
        }

    printf("\nDestination array: ");
    for (int i = 0; i < n; i++)
        {
        printf("%d ", destination_array[i]);
        }

    return 0;
}

