/*
A pointer is a variable that stores the address of another variable.
        int    *in_ptr;  // pointer to integer
        char   *ch_ptr;  // pointer to character
        float  *fl_ptr;  // pointer to float
*/
#include <stdio.h>
int main()
{
    int i = 72;
    int *j = &i; // j is a pointer pointing to i  [j is an integer pointer]
    int k = 67;
    printf("The address of i is %p\n", &i);
    // %u for integer value address
    printf("The address of i is %p\n", j);
    printf("The address of i is %p\n", &k);
    printf("The value at address j is %d\n", *j);  //*j = *(&i)
    return 0;
}