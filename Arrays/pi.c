#include<stdio.h>
#include<string.h>
#define PI 3.14159265359
double func(int n){
    int i=1;
    double approximate=0;
    for (int j=0;j<n;j++){
         approximate =approximate +  (double) 1/(i*i);
         i++;
    }
    return approximate;
}
int main() { 
    int num;
    double pie2=(PI*PI)/6;
    printf("Enter number of terms\n");
    scanf("%d",&num);
    double result=func(num);
    printf("Original (PIE*PIE)/6 = % lf \nApproximation = \t%lf\n",pie2,result);
    if(num>=1&&num<3){
        printf("GOOD Approximation");
    }else if(num>=3 && num<7){
        printf("Better Approximation");
    }else if(num>=7 && num<100){
        printf("Excellent Approximation");
    }else{
        printf("Very close");
    }
return 0;
}
