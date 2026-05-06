#include <stdio.h>
int main()
{
    FILE *ptr;
    FILE *ptr1;
    char ch;
    ptr = fopen("04.txt", "r");
    ptr1 = fopen("041.txt", "a");
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr1, "%c", ch);
            fprintf(ptr1, "%c", ch);
            printf("%c", ch);
        }
    }
    fclose(ptr);
    fclose(ptr1);
    return 0;
}
