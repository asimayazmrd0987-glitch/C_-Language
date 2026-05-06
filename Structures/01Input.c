#include <stdio.h>
#include <string.h>
struct Intro
{
    char name[20];
    int age;
    float height;
};
int main()
{
    struct Intro e1, e2, e3;
    printf("Enter your name :");
    scanf("%s", &e1.name);
    printf("Enter your age :");
    scanf("%d", &e1.age);
    printf("Enter your height:");
    scanf("%f", &e2.height);
    // e1.name="Asim";
    // e1.age=19;
    //  strcpy(e1.name, "Asim");
    //  e2.height=5.62;
    printf(" ===Output==== \n");
    printf("Your name is %s\n", e1.name);
    printf("Your age is %d\n", e1.age);
    printf("Your height is %f\n", e2.height);

    return 0;
}