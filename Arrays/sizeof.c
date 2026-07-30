#include<stdio.h>

int main(){
	//int arr[]={5,4,3,2,1};
	//int n=sizeof(arr)/sizeof(arr[0]);
	//printf("%d",n);// how many array
	int age = 19;
	int *ptr = &age;
	printf("The adress is %u\n",ptr);
	ptr++;
	printf("The adress is %u\n",ptr);
	
	return 0;
}
