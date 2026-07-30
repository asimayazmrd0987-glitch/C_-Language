#include<stdio.h>

int main(){
	int a,*b ,**c;
	a=3;
	 b=&a;
	 c=&b;
	printf("The adress of a is %d\n",&a);
	printf("The adress of a is %d\n",&b);
	printf("The vale of a Is %d\n",*b);//value of a
	printf("The adress of b is %d\n",*c);//shows b value but there isadress of a.
	printf("The adress of a Is %d\n",**c);
	printf("The adress of a Is %d\n",b);//adress of a directly
	return 0;
}
