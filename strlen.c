#include <stdio.h>
int main()
{
    char s[8]="harsh";
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    printf("length of string: %d\n", i);
    return 0;
}