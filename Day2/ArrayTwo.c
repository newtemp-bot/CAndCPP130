#include <stdio.h>
void main()
{
    /* int ax[][3] = {{10,20,30},{40,50,60}};
    printf("%d",ax[1][1]); */
    int row = 3,col=3;
    int a[3][3] = {{1,2,3},{4,5,6},{1,1,1}};
    /* for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter value for a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    } */
    for (int i = 0; i < row; i++)
    {
        for (int j = col-i-1; j > 0; j--)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",a[i][j]);
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = col-i; j > 0; j--)
        {
            printf("* ");
        }
        for (int j = col-i-1; j > 0; j--)
        {
            printf("* ");
        } 
        printf("\n");
    }
    
}