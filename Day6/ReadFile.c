#include <stdio.h>
void main()
{
    FILE* fp;
    fp = fopen("myfile.txt","r");
    if (fp!=NULL)
    {
        int ch = fgetc(fp);
        while (ch!=EOF)
        {
            putchar(ch);
            ch = fgetc(fp);
        }
        if (feof(fp))
        {
            printf("Code end");
        }
        else
        {
            printf("Error");
        }
        fclose(fp);
        
    }
    else
    {
        printf("File does not exsit");
    }
    
}