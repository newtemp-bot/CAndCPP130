#include <stdio.h>
void display(); // Declaration
void dis(int x);
void main()
{
    display();
    // Code
    printf("Some Code");
    display();
    dis(50);
}
void display()
{
    for (int i = 0; i < 4; i++)
        printf("Hello");
}
void dis(int x)
{
    printf("\t%d",x);
}