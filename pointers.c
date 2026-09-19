#include<stdio.h>
int main()
{
    int var = 20;
    int *ptr = &var;
    printf("The address of var is:%x\n",&var);
    printf("The address stored in ptr is:%x\n",ptr);
    printf("Value of var stored in ptr:%d\n",*ptr);
    return 0;

}