#include<stdio.h>
#include<string.h>
int digitSum(int n){
    static int x=0;
    x++;
   if(n==0){
    printf("function has been called = %d\n",x);
    return 0;
   }
   return (n%10) +digitSum(n/10); 
}
int main() { 
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    printf("Sum of digit = %d",digitSum(num));
return 0;
}
