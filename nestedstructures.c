#include<stdio.h>
struct address 
{
int hno;
char city[20];
int pin;

};
struct employee
{
    char name[20];
    struct address add;


};
void main()
{
    struct employee emp;
    printf("Enter Employee info\n");
    scanf("%s %d %s %d",emp.name, &emp.add.hno, emp.add.city, &emp.add.pin);
    printf("\n printing the employee info....\n");
    printf("name:%s \nhouse no:%d\n city:%s\n pincode:%d\n",emp.name, emp.add.hno, emp.add.city, emp.add.pin);

}