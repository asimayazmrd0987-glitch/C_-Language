#include <stdio.h>

int main() {
    int arr[5] = {23, 24, 55, 66, 22};
    int n = 5;
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

