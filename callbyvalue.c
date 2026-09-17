#include<stdio.h>
void swap( int a, int b);
int main()
{
    int a= 10;
    int b = 20;
    printf("\n before swap value of a = %d and b = %d", a, b);
    swap(a, b);
    printf("\n after swap value of a = %d and b = %d", a, b);
}

void swap( int a, int b)

{
    int temp;
    temp = a;   
    a=b;
    b=temp;    
}