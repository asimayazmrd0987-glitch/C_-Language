#include <stdio.h>
int main()
{
    char A[100];
    char B[100];
    printf("Enter first string:");
    scanf("%100s", A);
    printf("Enter second string:");
    scanf("%100s", B);
    for (int i = 0; A[i] != '\0' || B[i] != '\0'; i++)
    {
        if (A[i] != B[i])
        {
            printf("Different\n");
            return 0;
        }
        else
        {
            printf("Same\n");
            return 0;
        }
    }

    return 0;
}