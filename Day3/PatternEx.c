#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];  // Increased size to hold a longer name
    printf("Enter your name = ");
    scanf("%99s", str);  // Limiting input to 99 characters to prevent overflow
    int length = strlen(str);  // Get the actual length of the input string
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
}