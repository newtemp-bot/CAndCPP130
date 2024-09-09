#include <stdio.h>
#include <string.h>
void main()
{
    char sp[100] = "Ashok123";
    char p[100];
    printf("Enter Your password = ");
    scanf("%s", &p);
    //* strcmp(sp, p) return 0 if match */
    printf("%s",(!strcmp(sp, p))?"Yes it is valid...":"No not valid...");
}