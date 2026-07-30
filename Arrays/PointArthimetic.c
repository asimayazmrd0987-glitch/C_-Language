#include<stdio.h>

int main(){
	int age = 20;
	int *ptr=&age;
	printf("Orignal adress is %d\n",ptr);
	ptr++;
	printf("%d\n",ptr);//the value printed here has to be minus by 4,to get the orignal adress of age
	ptr--;
	printf("%d\n",ptr);
	
	
	return 0;
}
