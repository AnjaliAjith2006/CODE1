#include <stdio.h>
int main() {
    int num, real_num, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    real_num = num;

    while (real_num != 0) 
    {
        remainder = real_num % 10;
       result += remainder * remainder * remainder;
       real_num /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}