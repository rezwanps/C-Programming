#include<stdio.h>

int main(){

    char ch;
    printf("Type any character : ");
    scanf("%c", &ch);

    switch(ch){
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
        printf("This is  Vowel\n");
        break;

        default :
        printf("This is Consonant\n");
    }

    return 0;
}