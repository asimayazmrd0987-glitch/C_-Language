#include<stdio.h>

struct vector{
int i;
int j;
};
int main(){
    struct vector v={12,14};
    printf("%di + %dj",v.i,v.j);
    
return 0;
}