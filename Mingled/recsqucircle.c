#include<stdio.h>
float circle(float side);
float square(float rad);
float rec(float rec1,float rec2);

int main(){
	float a=3 , b =3;
	printf("%f",rec(a,b));
	
	return 0;
}
float circle(float side){
	return side * side;
}
float square(float rad){
	return rad *rad;
}
float rec(float rec1,float rec2){
	return rec1*rec2;
	return 0;
}
