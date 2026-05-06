#include <stdio.h>

int gcd(int a, int b)
{
    int temp;
    while (b!=0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }
    
}
int main()
{
    int a, b ;
    printf("Enter number 1:");
    scanf("%d", &a);
    printf("Enter number 2:");
    scanf("%d", &b);
    printf("GCD of %d and %d is %d\n", a,b, gcd(a, b));

    return 0;
}