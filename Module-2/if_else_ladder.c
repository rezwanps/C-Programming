#include<stdio.h>

int main(){
    int tkIHas;
    scanf("%d",&tkIHas);

    if(tkIHas>=100){
        printf("Burger Khabo");
    }
    else if(tkIHas<=100 && tkIHas>=50){
        printf("Fuchka Khabo");
    }
    else{
        printf("Kichu Khabo Na");
    }
    return 0;
}