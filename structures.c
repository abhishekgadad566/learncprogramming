#include<stdio.h>
#include<string.h>
struct employee{
    int id;
    char name[50];

} ;
int main()
{
    struct employee e1;
    e1.id=101;
    strcpy(e1.name,"Abhishek");
     
    printf("employee 1 id :%d\n", e1.id);
    printf("employee 1 name :%s\n", e1.name);

    return 0;
}