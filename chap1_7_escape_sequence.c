#include<stdio.h>
int main(){
int a;
char ch= 'a';
ch ='c';
ch='\n'; //escape sequence character, represents a new line
printf("I am rishita \n22 years old\n");
printf("I am rishita \t22 years old\n");
printf("I am rishita \"22 years old\n");
printf("I am rishita \'22 years old\n");
printf("I am rishita \\22 years old\n");
printf("I am rishita \\n22 years old\n");
return 0;
}