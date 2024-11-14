#include <stdio.h>

int main()
{
    char s[10];
    char t[6]="harsh";
    int i=0;
    while (t[i]!='\0')
    {
        s[i]=t[i];
        i++;
    }
    s[i]='\0';
    printf("%s\n", s);
    

    return 0;
}