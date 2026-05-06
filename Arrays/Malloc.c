#include<stdio.h>

int main(){
	int n,i ,sum=0;
	int arr[8];
	printf("Enter any 8 arry:");
	for(i=0;i<8;i++){
	scanf("%d",&arr[i]);}
	
	for(i=7;i>=0;i--){
		printf("%d\n",arr[i]);
	}
	
	return 0;
}

