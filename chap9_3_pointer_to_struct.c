#include<stdio.h>
struct employee
    {
    int code;//This declares a new user defined data type!
    float salary;
    char name[10];
};
int main(){
    struct employee e1; //creatig  a structure variable
    e1.code= 100;
    struct employee *ptr;
    ptr=&e1;

    printf("%d",(*ptr).code);
    // printf("%d",ptr->code);  //  same both

    return 0;
}