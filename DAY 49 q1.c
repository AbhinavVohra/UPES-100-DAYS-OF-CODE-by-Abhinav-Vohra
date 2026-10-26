//Write a program to print the initials of a name

#include <stdio.h>
int main()
{
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name,sizeof(name),stdin);

    printf("Initials: ");

    if (name[0] != ' ')
        printf("%c",name[0]);

    for (i = 1; name[i] != '\0'; i = i + 1) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c", name[i + 1]);
        }
    }
    printf("\n");
    return 0;
}
