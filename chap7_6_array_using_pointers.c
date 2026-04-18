#include <stdio.h>

int main()
{
    int marks[] = {23, 45, 76, 89}; // 'marks' name er array

    int *ptr = &marks[0]; // integer pointer who points marks at index 0  i.e. 23
    // int* ptr = marks;  // same as int* ptr =&marks[0];

    for (int i = 0; i < 4; i++)
    {
        // printf("The marks at index %d is %u", i, marks[i]);
        printf("The marks at index %d is %u\n", i, *ptr);
        ptr++;
    }

    return 0;
}