/*
A function defined in C can call itself. This is called recursion. ex. Factorial
factorial(n)=1x2x3x...xn = 1x2x3x...x(n-1)xn = factorial(n-1)xn
*/

#include <stdio.h>

int factorial(int);

int factorial(int n)
{

    if (n == 1 || n == 0)  // base condition
    {
        return 1;
    }
    // factorial(n)= factorial(n-1)Xn
    return factorial(n - 1) * n;
}
int main()
{
    int a = 7;
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}