#include <stdio.h>
void main()
{
    /* int i = 0;
    while ( i < 5)
    {
        if (i==3)
        {
            i++;
            continue;
        }
        printf("%d",i);
        i++;
    } */

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i==1)
            {
                continue;
            }
            printf("I = %d,J = %d | ", i, j);
        }
        printf("\n");
    }
}