#include <stdio.h>
int main()
{
    FILE *ptr;
    char num[20];
    ptr = fopen("01.txt", "w");
    fprintf(ptr, "Welcome to file handling in C\n");
    fprintf(ptr, "Welcome to the one of the fine hostel\n");

    fclose(ptr);
    ptr = fopen("01.txt", "r");
    fscanf(ptr, "%[^\n]", num);
    printf("Data from 01 is %s\n", num);
    printf("Data from 01 is %s\n", num);
    printf("Data from 01 is %s\n", num);

    // fscanf(ptr, "%d", &num);
    // printf("The value of num is %d\n",num);

    return 0;
}