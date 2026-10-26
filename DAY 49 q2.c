// Write a program to print initials of a name with the surname displayed in full.

#include <stdio.h>
int main()
{
    char name[100];
    int i , last = 0;
    printf("Enter your full name: ");
    fgets(name,sizeof(name),stdin);

    printf("%c. ",name[0]);
    for (i = 0 ; name[i] != '\0' ; i = i + 1) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c. ", name[i + 1]);
        }
    }
    for (i = 0 ; name[i] != '\0' ; i = i + 1) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            last = i + 1;
        }
    }
    for (i = last ; name[i] != '\0' ; i = i + 1) {
        printf("%c",name[i]);
    }
    return 0;
}
