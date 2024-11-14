#include <stdio.h>
#include <string.h>
int main()
{
    int flag = 1;
    char s[10];
    char p[20];
    int i = 0;
    printf("enter the first string");
    scanf("%s", s);
    printf("enter the second string");
    scanf("%s", p);
    if (strlen(s) != strlen(p))
    {
        flag = 0;
    }
    while (s[i] != '\0')
    {
        if (s[i] != p[i])
        {
            flag = 0;
            break;
        }
        i++;
    }
    if (flag == 1)
    {
        printf("string are same");
    }
    else
    {
        printf("string are different");
    }

    return 0;
}
