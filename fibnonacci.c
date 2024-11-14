#include <stdio.h>

int main(){
int x=0,y=1,fib,num;
printf("enter a number");
scanf("%d",&num);
printf("%d,%d",x,y);
for (int i=2;i<num;i++)
{
    fib=x+y;
    printf("%d",fib);
    x=y;
    y=fib;
}
    return 0;
}