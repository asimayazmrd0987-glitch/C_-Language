#include <stdio.h>

void calculate(float x);//declaration sho
int main(){
	float x = 100.0;
	calculate(x);
	printf("The value is %f \n",x);
	return 0;
}
void calculate(float x){//definition sho
	x = x + (0.8*x);
	printf("The calculated value is %f :\n",x);
	
}

