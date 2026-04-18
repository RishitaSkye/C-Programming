#include<stdio.h>
int main(){
int i =  23;
int *j= &i;
int **k = &j;

  //  ***&&&j means j bcz * with & cancelizes
  
printf("The value of i is %d\n",i);
printf("The value of i is %d\n",*j);
printf("The value of i is %d\n",*(&i));
//printf("The value of i is %d\n",*(&j));
printf("The value of i is %d\n",**(&j));
    return 0;
}