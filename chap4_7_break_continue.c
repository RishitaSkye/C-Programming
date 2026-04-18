#include <stdio.h>

int main()
{
    for (int i = 0; i < 15; i++)
    {
        if (i == 5)
        {
            // break;  //exit the loop now!  (upto <5th iteration)
            continue; // skip this iteration now!  (5th iteration skip)
        }
        printf("i is %d\n", i);
    }
    printf("For loop is done!");
    return 0;
}