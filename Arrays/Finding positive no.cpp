#include<stdio.h>
int count(int a[],int n){
	int noofpositive=0;
	for(int i=0 ; i<n ; i++){
		if(a[i]>0){
		 noofpositive  ++;
		}
		}
		return noofpositive;
}
int main(){
	int a[1]={1,2,-3,-4,-5,6,-7,-8,9,10};
	printf("The number are %d",count(a,9));
	return 0;
}
