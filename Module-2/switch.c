#include<stdio.h>
#include<stdbool.h>

int main(){
    int day;
    printf("Enter Any of 1-3\n");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Saturday\n");
        break;

    case 2 :
    printf("Sunday\n");
    break;
    
    case 3 :
    printf("Monday\n");
    break;

    default:
    printf("I know only 1-3\n");
        break;
    }
    return 0;
}