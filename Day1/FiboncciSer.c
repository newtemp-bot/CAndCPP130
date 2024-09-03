#include <stdio.h>
void main(){
    int f1=0,f2=1,sum,n;
    printf("Enter your numebr = ");
    scanf("%d",&n);
    printf("%d, %d,",f1,f2);
    for (size_t i = 2; i <= n; i++){
        sum = f1 + f2;
        printf(" %d,",sum);
        f1 = f2;
        f2 = sum;
    } 
}