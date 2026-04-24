#include<stdio.h>

int main(){
    int i;
    int number = 8;
    int limit = 20;

    for(int i=1;i<=limit;i++){
        printf("%d * %d = %d\n",number,i,number*i);
    }

    return 0;
}