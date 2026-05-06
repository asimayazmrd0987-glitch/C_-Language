#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};
void view(struct employee e);

void view(struct employee e)
{
    printf("Code=%d\n && salary=%.2f\n && name=%s\n ", e.code, e.salary, e.name);
}

int main()
{
    struct employee e1;
    e1.code = 123;
    strcpy(e1.name, "Tnaveer");
    e1.salary = 456;
    view(e1);

    return 0;
}
