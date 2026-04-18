#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[2][2] = {{2, 6}, {8, 4}};
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
