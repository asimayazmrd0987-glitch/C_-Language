#include <stdio.h>
int main()
{
    int ch;
    for (ch = 0; ch <= 255; ch++)
    {
        printf("%d %c\n", ch, (char)ch);
        if (ch == 255)
        {
            break;
        }
    }
    return 0;
}