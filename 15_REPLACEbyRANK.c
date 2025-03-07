//REPLACE each element of the array by its rank in the array


#include <stdio.h>
#include <stdlib.h>

// Structure to store each element along with its original index.
typedef struct {
    int value;   // The value of the element
    int index;   // The original index of the element in the array
} Element;

// Comparison function for qsort to sort Elements in ascending order based on value.
int compare(const void *a, const void *b) {
    Element *elemA = (Element *)a;
    Element *elemB = (Element *)b;
    return elemA->value - elemB->value;
}

// Function to replace each element with its rank in the array.
void replaceWithRank(int arr[], int n) {
    // Step 1: Create an array of Element structures to store values and original indices.
    Element elements[n];
    for (int i = 0; i < n; i++) {
        elements[i].value = arr[i];
        elements[i].index = i;
    }

    // Step 2: Sort the array of Elements based on the value.
    qsort(elements, n, sizeof(Element), compare);

    // Step 3: Assign ranks based on the sorted order.
    // If two elements have the same value, they get the same rank.
    int rank[n];            // Array to store the rank corresponding to each original index.
    int current_rank = 1;   // Start ranking from 1

    // The smallest element gets rank 1.
    rank[elements[0].index] = current_rank;

    // Process the rest of the elements.
    for (int i = 1; i < n; i++) {
        // If the current element's value is different from the previous, increment the rank.
        if (elements[i].value != elements[i - 1].value) {
            current_rank++;
        }
        // Map the rank to the original index of the element.
        rank[elements[i].index] = current_rank;
    }

    // Step 4: Replace the original array elements with their corresponding ranks.
    for (int i = 0; i < n; i++) {
        arr[i] = rank[i];
    }
}

int main() {
    // Example input array
    int arr[] = {40, 10, 30, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Replace each element with its rank
    replaceWithRank(arr, n);

    // Print the modified array
    printf("Array after replacing elements with ranks: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
