#include <stdio.h>
#include <math.h>

int main()
{
    int n, firstDigit, lastDigit, digit;

    printf("Enter number = ");
    scanf("%d", &n);

    if(n == 0){
        printf("first digit = 0 and last digit = 0");
        return 0;
    }

    lastDigit = n % 10;
    digit = (int)log10(n);
    firstDigit = (int)(n / pow(10, digit));

    printf("first digit = %d and last digit = %d", firstDigit, lastDigit);

    return 0;
}