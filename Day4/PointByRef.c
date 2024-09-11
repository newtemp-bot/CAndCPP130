#include <stdio.h>
int mul(int x,int y)//x=10,y=20//x=a,y=b;
{
    return x*y;
}
int sum(int *x,int *y)//x=&a,y=&b//Passing Arguments by Reference
{
    return (*x)+(*y);
}
void main()
{
    int a=10,b=20;
    printf("%d",mul(10,20));
    printf("%d",mul(a,b));
    printf("%d",sum(&a,&b));//Passing Arguments by Reference
}