#include <stdio.h>

void findSecondLargest(int arr[], int size) {
    if (size < 2) {
        printf("Array should have at least two elements.\n");
        return;
    }

    int largest = arr[0], second_largest = -1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == -1)
        printf("No second largest element found (all elements are equal).\n");
    else
        printf("The second largest element is: %d\n", second_largest);
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    findSecondLargest(arr, size);

    return 0;
}