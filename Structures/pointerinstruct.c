#include<stdio.h>
struct students{
    int id;
    float marks;
};
int main(){
    struct students s1;
    struct students *p=&s1;
    
    p->id=12;
    p->marks=98;

    printf("ID = %d & Marks = %f",p->id,p->marks);

return 0;
}