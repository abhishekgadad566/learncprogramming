#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10]="Hello";
    char s2[10]="World";
    char s3[20];
    int len;

    strcpy(s3, s1);
    printf("strcpy(s3,s1): %s\n",s3);

    strcat(s1,s2);
    printf("strcat(s1, s2): %s \n",s1);

    len=strlen(s1);
    printf("strlen(s1):%d\n",len);

    return 0;
}