#include <stdio.h>

struct student
{
    int id;
    float marks;
};
int main()
{
    struct student s[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the id of student:\n");
        scanf("%d", &s[i].id);
        printf("Enter the marks of the student :\n");
        scanf("%f", &s[i].marks);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The id = %d and marks is =%f\n", s[i].id, s[i].marks);
    }

    return 0;
}