#include <stdio.h>
#include <math.h>  

void separateNumber(double num, char *sign, int *integerPart, double *fractionPart) {
    if(num > 0)
        *sign = '+';
    else if(num < 0)
        *sign = '-';
    else
        *sign = ' '; 
 
    *integerPart = (int)fabs(num);
  
    *fractionPart = fabs(num) - *integerPart;
}
int main() {
    double number;
    char sign;
    int integerPart;
    double fractionPart;

    printf("Enter a number: ");
    scanf("%lf", &number);

    separateNumber(number, &sign, &integerPart, &fractionPart);

    printf("Sign: %c\n", sign);
    printf("Integer Part: %d\n", integerPart);
    printf("Fractional Part: %.6f\n", fractionPart);

    return 0;
}

