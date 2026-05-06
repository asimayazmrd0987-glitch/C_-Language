#include <stdio.h>
#include <math.h>

double approximate_pi(int n)
{
    double sum = 0.0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + 1.0 / (i * i);
    }
    return sqrt(6 * sum);
}
int main()
{
    int n;
    double pi;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    pi = approximate_pi(n);

    printf("Approximation of pi = %f\n", pi);

    return 0;
}
