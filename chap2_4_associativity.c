#include<stdio.h>
int main(){
    int a=3; 
    int b=6;
    int c=9;
    /*
    1st=    * / %
    2nd=    + -
    3rd=    =
    */
    printf("The value is %d\n", a*b/c+5);
    printf("The value is %d\n", 3*b/2*c+5*a);
    // 3*b/2*c+5*a
    // 3*b/2*c+15
    // 18/2*c+15
    //9*c+15
    //81+15 =96
    
    return 0;
}