#include<stdio.h>
int main(){
    char ch[100+1];
    printf("Enter your sentence:");
    //ch = getchar();
    ch[0]=  getchar();
   
    scanf("%[^\n]",ch);
    printf("The sentence you entered was %s\n", ch);
     printf("The sentence you entered is %s", ch);
return 0;
}