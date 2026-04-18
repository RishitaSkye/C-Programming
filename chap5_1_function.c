#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int x, int y)
{
    //printf("The sum is %d\n", x + y);
    return x+y;
}

int main()
{
    //int a = 1;
    //int b = 2;

    //sum(a, b);
        // int c = a + b;
        // printf("The sum is %d\n", c);
        int c= sum(1,2);   // Function call
        printf("%d\n", c);

    int a1 = 12;
    int b1 = 26;

    // int c1 = a1 + b1;
    // printf("The sum is %d\n", c1);
    sum(a1, b1); // Function call
return 0;
}

