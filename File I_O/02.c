#include<stdio.h>

int main(){

    FILE *p;
    int num1 , num2, num3;
    p=fopen("02.txt", "r");
    fscanf(p, "%d %d %d",&num1, &num2 , &num3);
    printf("The value are %d %d %d",num1,num2,num3);
    fclose(p);
    return 0;
}