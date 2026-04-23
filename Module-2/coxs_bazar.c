#include<stdio.h>

int main(){

    int tkIHave;
    scanf("%d", &tkIHave);

    if(tkIHave>=5000){
        printf("Cox's Bazar Jabooo\t");

        if(tkIHave>=10000){
            printf("Saintmartin O Jabooo");
        }
        else{
            printf("Saintmartin Jaboo Na");
        }
    }

    else{
        printf("Kothao Jabooo Naaaa");
    }

    return 0;
}