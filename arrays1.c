#include<stdio.h>
int main()
{ 
    int n[5], i, j;
    for(i=0; i<5; i++)
    {
        n[i] = i+100;
    }
    for(j=0; j<5; j++)
    {
        printf("n[%d] = %d\n", j, n[j]);
    }
    return 0;

        
    
}