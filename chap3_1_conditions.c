#include<stdio.h>
int main(){
    int age=50; //variable age and declare 5
    if(age>10){
        printf("we are inside if\n");
        printf("Your age is greater than 10\n");
    }

// (=) is assignment operator, (==) is equalsto
    if(age%5==0){
        printf("we are inside another if\n");
        printf("Your age is divisible by 5\n");
    }

    if(age>10){
        printf("Your age is greater than 10\n");
    }
    else{
        printf("you are young");
    }
    return 0;
}