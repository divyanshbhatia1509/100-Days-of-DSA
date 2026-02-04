/*Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the reversed array, space-separated

Example:
Input:
5
1 2 3 4 5 6

Output:
5 4 3 2 1

Explanation: Swap pairs from both ends: (1,5), (2,4), middle 3 stays*/

#include<stdio.h>
int main()
{
    int i,n,temp;
    printf("Enter the no of elements you want to enter in an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements to array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;

    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}