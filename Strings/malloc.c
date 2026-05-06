#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *)malloc(sizeof (int));
    if (ptr==NULL){
        printf("Memory failed\n");
    }
    *ptr=45;
    printf("The value is %d\n",*ptr);
    free(ptr);
return 0;
}
