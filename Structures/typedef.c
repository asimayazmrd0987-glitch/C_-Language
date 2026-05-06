#include <stdio.h>
typedef struct employee
{
    int code;
    float salary;
    char name[20];
}emp;

int main()
{
    emp e1;
    emp* ptr1 =&e1;
    e1.code = 123;
    e1.salary = 456;
    struct employee *ptr;
    ptr = &e1;
    printf("%d\n", (*ptr).code);
    printf("%f", ptr->salary);

    return 0;
}
