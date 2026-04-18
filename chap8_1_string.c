#include<stdio.h>  //A string is 1-D character array terminated by a null character('\0').

int main(){
 //char st[]={'a', 'b', 'c', '\0'}; //\0 is null character denote the termination of a string.
 char st[]="HARRY"; //in this case c adds a null character automatically.
 //for (int i = 0; i < 3; i++)
 //{
    //printf("character is %c \n", st[i]);
    //printf("%c", st[i]);
    printf("%s", st);  // print the entire string
    
 //}
 
 
 //printf("First character is %c \n",st[0]); // string at position 0 that is 'a'

    return 0;
}