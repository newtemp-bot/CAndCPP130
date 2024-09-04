#include <stdio.h>
void main()
{
    /* Single dimensions */
    //normal way
    int a[3];
    a[0]=20;
    a[1]=10;
    a[2]=70;
    printf("%d",a[2]);
    //geting & printing from a loop
    int c[3],size=sizeof(c)/sizeof(a[0]);
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = %d",i,a[i]);
    }
    //defualt size
    int x[5] = {20,30,70};
    for (int i = 0; i < 5; i++)
    {
        printf("x[%d] = %d",i,x[i]);
    }
    
}