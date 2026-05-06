#include <stdio.h>

#define PI 3.14159265  // Define value of pi

int main() {
    double degrees, radians;

    printf("Enter angle in degrees: ");
    scanf("%lf", &degrees);

    radians = degrees * (PI / 180.0);

    printf("%.2lf degrees = %.4lf radians\n", degrees, radians);

    return 0;
}

