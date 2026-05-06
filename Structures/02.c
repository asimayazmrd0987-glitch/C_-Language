#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee e1;
    e1.code = 123;
    e1.salary = 456;
    struct employee *ptr;
    ptr = &e1;
    printf("%d\n", (*ptr).code);
    printf("%f", ptr->salary);

    return 0;
}
