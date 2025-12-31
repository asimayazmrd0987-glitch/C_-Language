#include<stdio.h>

int main(){
	int sum,avg;
	int marks[30];
	for(int i=0;i<29;i++){
		printf("Enter marks :");
		scanf("%d",&marks[i]);
	}
	for(int i=0;i<29;i++)
	sum=sum+marks[i];
	avg=sum/30;
	printf("the marks are %d",avg);
	return 0;
}
