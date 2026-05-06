#include <stdio.h>
int main()
{
    int a[3][4];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter rollno of the Students %d:", i + 1);
        scanf("%d %d", &a[i][0], &a[i][1]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d %d\n", a[i][0], a[i][1]);
    }

    return 0;
}
