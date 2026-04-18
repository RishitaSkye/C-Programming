#include<stdio.h>
int main(){
if(1){ //non zero
    printf("This code is executed!\n");
}
if(23456){ //non zero
    printf("This code is also executed!\n");
}
if(2.76){ //non zero
    printf("This code is also executed!\n");
}
if('c'){ //non zero value
    printf("This code is also executed!\n");
}
if(0){ //not going to executed
    printf("i am zero and I am not executed!\n");
}
    return 0;
}