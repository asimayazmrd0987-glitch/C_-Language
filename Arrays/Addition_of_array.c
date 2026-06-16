#include <stdio.h>

int main() {
    int arr[] = {50, 60, 70, 80, 90};
    int *i = &arr[0];
    int *j = &arr[3];

    printf("i=%d and j=%d", *i, *j);
    return 0;
}

