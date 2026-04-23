#include<stdio.h>

int main(){

    int number;
    scanf("%d",&number);

    if(number%2==0){
        printf("This is Even Number");
    }
    else{
        printf("This is Odd Number");
    }

    return 0;
}