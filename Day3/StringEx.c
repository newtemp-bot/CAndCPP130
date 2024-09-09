#include <stdio.h>
#include <string.h>
void main()
{
    char str[100],str2[100],com[100] = "Hello";
    printf("Enter your name = ");
    fgets(str, 100, stdin);//scanf("%s",&str);
    printf("%s",str);
    printf("%d",strlen(str));
    strcpy(str2,str);//first para str2(where we want to copy),second para str(where to get value)
    printf("%s",str2);
    strcat(com,str);
    //strlwr(com);
    strupr(com);
    printf("%s",com);
}