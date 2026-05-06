#include <stdio.h>
#define size 10

int call_sum(int arr[], int SIZE)
{
    int i, sum = 0;
    for (i = 0; i < SIZE; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int input[size];
    printf("Enter a list of digits %d\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &input[i]);
    }
    printf("the value of call sum is %d", call_sum(input, size));

    return 0;
}