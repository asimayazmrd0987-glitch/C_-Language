#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    char *p;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    p = strrchr(str, ch);

    if (p != NULL && *(p + 1) != '\0')
        printf("Result: %s", p + 1);
    else if (p != NULL)
        printf("Nothing after the last occurrence.\n");
    else
        printf("Character not found. String is: %s", str);

    return 0;
}
