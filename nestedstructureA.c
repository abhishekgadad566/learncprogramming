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
    struct employee emp[2];
    for(int i=0; i<2; i++)
    {
        printf("Enter employee %d info\n....", i);
        scanf("%s %d %s %d",emp[i].name,&emp[i].add.hno,emp[i].add.city,emp[i].add.pin);
    }


  for(int i=0; i<2; i++)
  {
    printf("\nprinting the employee %d info....\n",i);
    printf("name:%s\nhouse no:%d\ncity:%s\npincode:%d",emp[i].name, emp[i].add.hno,emp[i].add.city,emp[i].add.pin);
  }
}