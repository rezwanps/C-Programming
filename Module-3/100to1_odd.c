#include<stdio.h>

int main(){
    int number =1;
    
    for(int i=100;i>=number;i--){
        if(i%2==0){
            printf("Odd Number is - %d\n",i);
        }
    }
    return 0;
}