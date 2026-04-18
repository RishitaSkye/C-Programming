#include<stdio.h>
int main(){
    int age=15;
    if(age>60){
        printf("You are a senior citizen and you can drive\n");
    } //if this condition is true rest allnare ignored
    else if(age>40){
        printf("You can drive and you are elder");
    }
    else if(age>18){
        printf("You can drive");
    }
    else{
        printf("You cannot drive");
    }
    return 0;
}