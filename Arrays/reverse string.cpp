#include<stdio.h>
#include<string.h>
void reversit(char arr[]){
    int n=strlen(arr);
    
    printf("\tBefore Swapping:\n");
    printf("\t\t%s\t\n",arr);
    //reversing the string
    int i=0;
    int j=n-1;
    while(i<j){
        char temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }   
    printf("\tAfter Swapping:\n");
    printf("\t\t%s\n",arr);
}
int main() { 
   
    char array[100];
    printf("Enter a string\n");
    fgets(array,sizeof(array),stdin);
    
    array[strcspn(array,"\n")]='\0';
   
    reversit(array);
return 0;
}

