#include <stdio.h>
void main(){
    /* Integer Pointers */
    int x = 10;
    int *ptrx = &x;
    printf("Value at ptrx = %p \n", ptrx);
    printf("Value at x = %d \n", x);
    printf("Value at *ptrx = %d \n", *ptrx);
    /* 
        datatype * variable = &ref Variable;
        datatype* variable = &ref Variable;
        datatype *variable = &ref Variable;
        datatype *variable;1
        variable= &ref Variable;2
     */
    /* Array Pointer */
    /* First 0th index value form an Array */
    int a[] = {50,20,60};
    int* ptr = a;
    printf("%d\n\n",*ptr);
    printf("%d\n\n",*(++ptr));
    /* Full Array */
    int k[] = {50,20,60};
    int (*ptrk)[] = &k;
    int xy = sizeof(k)/sizeof(int);
    for (int i = 0; i < xy; i++)
    {
        printf("%d",(*ptrk)[i]);
    }
    // defining array
    int arr[5] = { 1, 2, 3, 4, 5 };
    // defining the pointer to array
    int* ptr_arr = arr;
    // traversing array using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr_arr++);
    }
    int a2[][2] = {{10,20},{30,40}};
    int (*p)[][2] = &a2;
    printf("%d",(*(*p))[0]);
}