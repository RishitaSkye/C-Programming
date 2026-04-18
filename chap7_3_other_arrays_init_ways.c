#include <stdio.h>

int main()
{
    int cgpa[4] = {9, 7, 8, 8};
    for (int i = 0; i < 4; i++)
    {
        printf("The value at index %d is %d\n", i, cgpa[i]);
    }
    return 0;
}