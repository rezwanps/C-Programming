#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);

     int i=1;
    do{
        printf("Number is : %d\n",i);
        i++;
    }
   
    while(i<num);
    return 0;
}