#include<stdio.h>
#include <ctype.h>

int main(){
    
    char ch;
    scanf("%c",&ch);

    if(isdigit(ch)){
        printf("IS DIGIT\n");
    }
    if(islower(ch)){
        printf("ALPHA\nIS SMALL");
    }
    if(isupper(ch)){
        printf("ALPHA\nIS CAPITAL");
    }
    
    return 0;
}