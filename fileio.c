#include <stdio.h>

int main()
{
    FILE *fptr;
    char st[100];

    fptr = fopen("programm.txt", "w");
    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(st, sizeof(st), stdin);

    printf("You entered: %s", st);
    fputs(st, fptr);

    fclose(fptr);
    return 0;
}