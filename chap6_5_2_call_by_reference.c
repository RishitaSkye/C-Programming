#include <stdio.h>

int sum(int*, int*);

// Sum should change the value of x
int sum(int* a, int* b)
{
    *a=6; // sum function cannot change x using a because copy of x is provided to sum in a
    return (*a + *b);
}

int main()
{
    int x=1, y=6; //its copy so no use is here 
    printf("The sum of 1 and 6 is %d\n", sum(&x, &y));
    printf("The value of x is %d\n", x);
    return 0;
}