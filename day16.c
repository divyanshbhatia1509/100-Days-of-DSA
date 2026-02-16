#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    // Count frequencies
    int count = 1;
    for(int i = 1; i <= n; i++) {
        if(i < n && arr[i] == arr[i - 1]) {
            count++;
        } else {
            printf("%d:%d\n", arr[i - 1], count);
            count = 1;
        }
    }

    return 0;
}
