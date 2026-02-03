/*Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

Input:
- First line: integer n (array size)
- Second line: n space-separated integers
- Third line: integer k (key to search)

Output:
- Line 1: "Found at index i" OR "Not Found"
Line 2: "Comparisons = c"

Example:
Input:
5
10 20 30 40 50
30

Output:
Found at index 2
Comparisons = 3

Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)*/

#include <stdio.h>

int main() {
    int n,i,element,comparision=0;
    printf("Enter the number of elements you want to enter in an array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements in an array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d",&element);
    int found = 0;
    for(i=0;i<n;i++)
    {
        if(element==arr[i])
        {
            comparision = i+1;
            found=1;
            break;
        }
    }
    if (found==1)
    {
        printf("Found at index %d",comparision-1);
        printf("\nComparision = %d",comparision);

    }
    else
    printf("\nNot Found");
}