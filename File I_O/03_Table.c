#include <stdio.h>
int main()
{
    FILE *p;
    int num = 5;
    p = fopen("Table.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(p, "%d", num * (i + 1));
        fprintf(p, "%c", '\n');
    }
    return 0;
}