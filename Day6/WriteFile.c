#include <stdio.h>
void main()
{
    FILE *fp;
    int i, n = 5;
    char str[100];
    fp = fopen("myfile.txt", "a");
    if (fp != NULL)
    {
        for (i = 0; i < n; i++)
        {
            printf("Enter your name = ");
            scanf("%s",str);
            fprintf(fp,"%d.%s",i,str);
        }
        
        
        fclose(fp);
    }
    else
    {
        printf("File does not exsit");
    }
}