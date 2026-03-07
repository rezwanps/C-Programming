#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){

    bool result = (2 < 5) || ((4>5) && (5==5)) ;

    printf("%d", result);


    return 0;
}