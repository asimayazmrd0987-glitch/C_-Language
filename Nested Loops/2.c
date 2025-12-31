#include<stdio.h>
#include<math.h>

float areaofsqr(float sqr);
float areaofcir(float cir);
float areaofrec(float a,float b);

int main(){
	   float a=5.0;
	   float b=3.0;
	   printf("The num is %f",areaofcir(4+a));
	
	return 0;
}
float areaofsqr(float sqr){
	return sqr*sqr;
}
float areaofcir(float cir){
	return cir+cir;
}
float areaofrec(float a, float b){
	return a*b;
}

