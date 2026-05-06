#include<stdio.h>
#define NUM 100
int main(){
    char ch[NUM+1];
    char c;
    int i;
    printf("Enter a string: ");
    for(i=0; i<NUM; i++){
        c=getchar();
        if(c=='\n')
            break;
        ch[i]=c;
    }
    ch[i]='\0';
    printf("The String you enter is %s:\n", ch);

return 0;
}