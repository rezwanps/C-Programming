#include<stdio.h>

int main(){
    int number;
    scanf("%d",&number);

    for(int i=0;i<=number;i++){
        if(i%2==0){
            printf("%d - Even\n",i);
        }
        else{
            printf("%d - Odd\n",i);
        }
    }
    return 0;
}