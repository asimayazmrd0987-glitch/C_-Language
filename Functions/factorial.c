#include<stdio.h>

int fact(int n){
    int result=1;
    for (int i = 1; i <=n; i++)
    {
        result=result*i;
    }
    return result;
    
}
int main(){
    int n;
    printf("Enter a number you want:");
    scanf("%d",&n);
    printf("Factorial is %d\n",fact(n));
return 0;
}