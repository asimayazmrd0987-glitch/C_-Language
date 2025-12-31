#include<stdio.h>
#include<string.h>
int main() { 
    int arr[100];
    int n=1;
     
    for(int i=0;i<100;i++){
        arr[i]=n;
        n++;
    }
    
    for(int j=0;j<100;j++){
        
        if(arr[j]==1){
            arr[j]=0;
        }         
        for(int k=j+1;k<100;k++){
            if(arr[j]>0 && arr[j]<=100 && arr[k]!=0){
              if(arr[k]%arr[j]==0){
                arr[k]=0;
              }
            }
        }
    }    
    for(int a=0;a<100;a++){
        if(arr[a]!=0){
            printf("%d\n",arr[a]);
        }
    } 
return 0;
}
