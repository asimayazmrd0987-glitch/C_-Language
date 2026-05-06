#include <stdio.h>

// Function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n == 0)  // Base case 1
        return 0;
    else if (n == 1) // Base case 2
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);
    printf("%d\n", fibonacci(n-1));
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

