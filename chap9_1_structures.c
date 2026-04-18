//array and strings--->similar data(int,float,char)
//structures can hold ---->dissimilar data.

//A c structure can be created as follows:
#include<stdio.h>
#include<string.h>
struct employee
{
    int code;//This declares a new user defined data type!
    float salary;
    char name[10];
}; //semicolon is important

//we can use this user defined datatypes as follows:
int main(){
struct employee e1, e2; //creatig  a structure variable
e1.code= 100;
strcpy(e1.name, "harry");

e1.salary = 71.22; 
printf("%d %f %s", e1.code, e1.salary, e1.name);
return 0;
}