/*
Problem:
Given a sorted array of n integers, remove duplicates in-place.
Print only unique elements in order.

Input:
- First line: integer n
- Second line: n space-separated integers (sorted array)

Output:
- Print unique elements only, space-separated

Example:
Input:
6
1 1 2 2 3 3

Output:
1 2 3

Explanation:
Keep first occurrence of each element: 1, 2, 3
*/

#include <stdio.h>

int main() {
    int n;

    // Ask user for number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Edge case check
    if (n <= 0) {
        printf("Invalid array size.\n");
        return 0;
    }

    int arr[n];

    // Ask user to enter array elements
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Index for unique elements
    int k = 1;

    // Remove duplicates in-place
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[k] = arr[i];
            k++;
        }
    }

    // Display unique elements
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
