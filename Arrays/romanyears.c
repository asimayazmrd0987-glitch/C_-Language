#include<stdio.h>
#include<string.h>
void roman(char *str,int date2){
       int i=0;
       while(date2!=0){
        if(date2>=1000){
            str[i]='M';
            date2-=1000;
        }else if(date2>=500){
            str[i]='D';
            date2-=500;
        }else if(date2>=100){
            str[i]='C';
            date2-=100;
        }else if(date2>=50){
            str[i]='L';
            date2-=50;
        }else if(date2>=10){
            str[i]='X';
            date2-=10;
        }else if(date2>=5){
            str[i]='V';
            date2-=5;
        }else if(date2>=1){
            str[i]='I';
            date2-=1;
        }
        i++;
       }
       str[i]='\0';
}
int main() { 
    char str[100];
    int date;
    printf("Enter a year you want to convert its to roman \n");
    scanf("%d",&date);

    roman(str,date);
    printf("%s",str);
return 0;
}
