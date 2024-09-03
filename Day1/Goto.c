#include <stdio.h>
void main()
{
    int i = 0;
    start:
    if (i!=15)
    {
        if (i%2!=0)
        {
            printf("%d, ",i);
            i++;
        }
        else
        {
            i++;
        }
        goto start;
    }
    else
    {
        printf("End");
    }
}