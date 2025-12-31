#include<stdio.h>
void display(int);
int main(){
	int i;
	int arr[]={10,20,30,40,50};
	for(i=0;i<=4;i++){
		display(arr[i]);	
	}
	return 0;
}
void display(int m){
	printf("%d\n",m);
}

