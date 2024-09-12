#include <stdio.h>
#include <string.h>
enum week{Mon,Wen,Fri}day;
enum bool{false,true}flag=false;
struct Students
{
    int id;
    char name[100];
    double marks;
} s3, s4, s5;

union Stu
{
    int id;
    char name[100];
    double marks;
} u3;

void main()
{
    struct Students s[3];
    printf("%lu\n",sizeof(s[0]));
    printf("%lu\n",sizeof(u3));
    printf("%d",Wen);
    if (flag==true)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Your Id for [%d] = ",i);
        scanf("%d",&s[i].id);
        printf("Enter Your Name for [%d] = ",i);
        scanf("%s",&s[i].name);
        printf("Enter Your Marks for [%d] = ",i);
        scanf("%lf",&s[i].marks);
        /* s[i].id = 1;
        strcpy(s[i].name, "Ashok"); //{'A','s','h','o','k'}
        s[i].marks = 89.2; */
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d %s %.2lf\n\n", s[i].id, s[i].name, s[i].marks);
    }
}