#include<stdio.h>
int main(){
int a=9.0;
int b=2; 
float c=9.0/2;
/*
float a=9.0; //same
int b=2; 
float c=a/b;
*/
int d=6.7;  //float d =6.7;
printf("The value of a/b is %f\n", c);
printf("The value of d is %d",d); //%f,then the value willbe 6.70000
/*
int and int= int (5/2 becomes 2 as both operands are int)
int and float=float (5.0/2 becomes 2.5 as 5.0 is float and 2 is int)
float and float= float
*/
/*
int k=3.0/9;
the value of k will be 0
float k=3.0/9;
ans will be 0.333
*/
    return 0;
}