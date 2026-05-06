#include <stdio.h>

int main() {
    int a[2][3][4];
    
    // Input
    for(int i = 0; i < 2; i++) {        // layers
        for(int j = 0; j < 3; j++) {    // rows
            for(int k = 0; k < 4; k++)  // columns
                a[i][j][k] = i*100 + j*10 + k;
        }
    }

    // Output
    for(int i = 0; i < 2; i++) {
        printf("Layer %d:\n", i);
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 4; k++)
                printf("%d ", a[i][j][k]);
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
