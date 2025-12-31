#include<stdio.h>

int main(){
    float prize[3];
    printf("Enter 3 number ");
    scanf("%f",&prize[0]);
    scanf("%f",&prize[1]);
    scanf("%f",&prize[2]);
    printf("The final value is %f :\n",prize[0]+(0.81*prize[0]));
    printf("The final value is %f :\n",prize[1]+(0.81*prize[1]));
    printf("The final value is %f :\n",prize[2]+(0.81*prize[2]));
	return 0;
}
