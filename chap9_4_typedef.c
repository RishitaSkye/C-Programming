
#include<stdio.h>
#include<string.h>

typedef struct employee
    {
    int code;//This declares a new user defined data type!
    float salary;
    char name[10];
}Emp;
int main(){
    //typedef int harry;
    //int a=90;
    //printf("The value of a is %d\n",a);

    // typedef struct employee emp;

    Emp e1; //creatig  a structure variable
    Emp* ptr1=&e1;
    e1.code= 100;
    strcpy(e1.name,"harry");
    e1.salary=54.44;

printf("%d %f %s\n", e1.code, e1.salary, e1.name);
printf("%d %f %s\n", ptr1->code, ptr1->salary, ptr1->name);
    return 0;
}

