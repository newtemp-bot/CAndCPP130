#include <stdio.h>
void main()
{
    FILE* fp;
    fp = fopen("myfile.txt","r");
    if(fp==NULL)
    {
        printf("File does not exisit");
    }
    else
    {
        printf("File is opened...");
    }
    /* fp = fopen("myfile.txt","w");
    if(fp==NULL)
    {
        printf("File does not exisit");
    }
    else
    {
        printf("File is opened...");
    } */
}