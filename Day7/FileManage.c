#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    int *ptr;
    int *ptr2;
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Entered number of elements: %d\n", n);
    // Dynamically allocate memory using malloc()
    ptr = (int *)malloc(n * sizeof(int));
    // Dynamically allocate memory using calloc()
    ptr2 = (int *)calloc(n, sizeof(int));
    // Dynamically re-allocate memory using realloc()
    ptr = (int *)realloc(ptr, n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");

        // Get the elements of the array
        for (i = 0; i < n; ++i)
        {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i)
        {
            printf("%d, ", ptr[i]);
        }
    }
    free(ptr);
    free(ptr2);
    return 0;
}