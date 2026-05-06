#include <stdio.h>
#include <string.h>

int main()
{
    char A[100];
    char B[100];
    printf("Enter first string:");
    scanf("%100s", A);
    printf("Enter second string:");
    scanf("%100s", B);
    
        if (!strcmp(A, B))
        {
            printf("Same\n");
            printf("The length is %d\n", strlen(A));
            return 0;
        }
        else
        {
            printf("The length of B is %d\n", strlen(B));
            printf("Different\n");
            return 0;
        }

    return 0;
}