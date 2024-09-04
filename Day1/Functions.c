#include <stdio.h>
void display(); // Declaration
void dis(int x);
int dada(){
    return 10+2;
}
int agecheck(int age){//return function
    if (age>=18)
        return 1;
    else
        return 0;
}
void main()
{
    void inner(){
        printf("inner call");
        void subinner(){
            printf("Subinner called..");
        }
        subinner();
    }
    display();
    // Code
    printf("Some Code");
    display();
    dis(50);
    int c = dada();
    printf("%d",c);
    printf("%d",dada());
    printf("%s",agecheck(16)?"Yes":"No");
    inner();
    
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