#include <stdio.h>
int main()
{
    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5; // 10
    printf("The value of i is %d\n", i);
    /*i++; // 11
    printf("The value of i is %d\n", i);*/

    //++i means first increment hoga then i print hoga(pre increment operator)
    // i++ means first print then increments (post increment operator)

    printf("The value of i is %d\n", i++); // 10
    printf("The value of i is %d\n", i);   // 11

    i += 2; // same as i=i+2;
    printf("The value of i is %d\n", i); //13

    return 0;
}