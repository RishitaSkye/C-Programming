#include<stdio.h>
int main(){
int a=2;
int b=6;
int c=a+b;
printf("The value of a is %d\n and the value of b is %d\n and the value of c is %d\n", a,b,c);
// modulus operator is used to get the remander
printf("The remainder when a is divided by b is %d\n", a%b);
/*
int b=4, c=6;
int z; z=b*c; //legal
int z; b*c=z; //illegal(not allowed)
int i=ab //invalid
int i= a*b //valid

This doesnot work for exponential in c
int d=a^b;
*/
    return 0;
}