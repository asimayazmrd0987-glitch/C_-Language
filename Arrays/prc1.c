#include<stdio.h>
int main(){
    int arr[5]={23,24,55,66,22};
    int n=66;
    //int * ptr=&arr[0];
	int i,j;
	//printf("The number is %d\n",arr[2]);
	for(i=0;i<5;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;}
		}
//        printf("The num at index %d is %d\n",i,*ptr);
//        ptr++;
    }for(i=0;i<n;i++){
    	printf("%d\n",arr[i]);
	}
return 0;
}
