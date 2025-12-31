#include <stdio.h>

void add(int a, int b);
void subtract(int a, int b);
void multiply(int a, int b);
void divide(int a, int b);

int main() {
    int choice, x, y;

    void (*operations[4])(int, int) = {add, subtract, multiply, divide};

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4) {
        printf("Invalid choice!\n");
        return 0;
    }

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    operations[choice - 1](x, y);

    return 0;
}

void add(int a, int b) {
    printf("Result = %d\n", a + b);
}

void subtract(int a, int b) {
    printf("Result = %d\n", a - b);
}

void multiply(int a, int b) {
    printf("Result = %d\n", a * b);
}

void divide(int a, int b) {
    if (b == 0)
        printf("Division by zero not allowed\n");
    else
        printf("Result = %.2f\n", (float)a / b);
}

