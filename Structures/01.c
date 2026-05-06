#include<stdio.h>
#include<string.h>
struct Intro{
        char name[20];
        int age;
        float height;
    };
int main(){
    struct Intro e1 ,e2;
    //e1.name="Asim";
    e1.age=19;
    strcpy(e1.name, "Asim");
    e1.height=5.62;
    printf("The name is %s\n",e1.name);
    printf("The age is %d\n",e1.age);
    printf("The height is %f\n",e1.height);

return 0;
}