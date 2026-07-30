#include<stdio.h>

int main(){
	int age=20;
	int _age=21;
	int *ptr=&age;
	int *_ptr=&_age;
	printf("The %u and %u difference is %u \n ",ptr,_ptr,ptr-_ptr);
	_ptr=&age;
	printf("The %u and %u comparison  is %u \n ",ptr,_ptr,ptr==_ptr);
}
 
