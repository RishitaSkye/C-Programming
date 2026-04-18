#include <stdio.h>

int main()
{
    int i;
    for (i = 5; i; i--)
    // or for(int i=5; i; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}
/*
steps:
'i' is initialized to 5.
The condition 'i'(0 or none) is tested.
The code is executed.
'i' is decremented.
Condition 'i' is checked & code is executed if its not 0
And so on untill 'i' is non 0.
*/