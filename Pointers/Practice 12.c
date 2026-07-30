#include<stdio.h>

int main(){
	int arr[] = {10,20,30,40,50};
	int *ptr = arr;
	
	printf("%d\n",*ptr);
	printf("%d\n",*(ptr+1));
	printf("%d\n",ptr[2]);
	printf("%d\n",*(arr+3));
	printf("%d\n",4[arr]);
	
	return 0;
}
