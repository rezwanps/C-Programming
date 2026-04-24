#include<stdio.h>
int main(){
    int X;
    scanf("%d",&X);
    int division = X/1000;
    if(division%2==0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    return 0;
}