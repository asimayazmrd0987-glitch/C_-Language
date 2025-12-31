#include <stdio.h>

void f(int n)
{
    printf("F(%d)'s Stack Frame Pushed\n", n);

    if (n > 1)
    {
        f(n - 1);
        f(n - 1);
    }

    printf("F(%d)'s Stack Frame Removed\n", n);
}

int main()
{
    f(3);
    return 0;
}

