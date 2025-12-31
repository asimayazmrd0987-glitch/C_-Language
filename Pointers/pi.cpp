#include <stdio.h>
#include <math.h>   // for sqrt()

// Function to approximate pi using n terms
double approx_pi(int n) {
    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (i * i);      // 1/(i^2)
    }

    return sqrt(6 * sum);          // pi = sqrt(6 × sum)
}

int main() {
    int n;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    double pi_value = approx_pi(n);

    printf("Approximation of pi using %d terms = %lf\n", n, pi_value);

    return 0;
}

