#include<stdio.h>

int main(){

    int a ,b;
    short int c = 7;
    char ch;
    float f;
    double dd;

    scanf("%d %d %c %f %lf" ,&a,&b,&ch,&f,&dd);

    printf(" a = %d b= %d c= %hd d = %c e = %f f = %lf",a,b,c,ch,f,dd);

    return 0;

}

/*
Format Specifier

int - %d
char - %c
float - %f
double - %lf;
short int - %hd;
long double - %lf
*/