//Write a program to find the longest word in a sentence

#include <stdio.h>
int main()
{
    char str[100];
    int i = 0,j = 0,len = 0,max = 0;
    int start = 0,maxstart = 0;

    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);

    while (1)  {
        if (str[i] != ' ' && str[i] != '\0') {
            len++;
        }
        else {
            if (len > max) {
                max = len;
                maxstart = start;
            }
            len = 0;
            start = i + 1;
        }
        if (str[i] == '\0') {
            break;
        }
        i = i + 1;
    }
    printf("Longest word: ");
    for (i = maxstart; str[i] != ' ' && str[i] != '\0'; i++) {
        printf("%c",str[i]);
    }
    printf("\nLength: %d\n",max);
    return 0;
}

  
