#include<stdio.h>
#include <ctype.h>

int main(){
    char X;
    scanf("%c",&X);
    if(isupper(X)){
        printf("%c",tolower(X));
    }
    else if(tolower(X)){
        printf("%c",toupper(X));
    }
    
    return 0;
}