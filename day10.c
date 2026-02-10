/*Problem: Read a string and check if it is a palindrome using two-pointer comparison.

Input:
- Single line: string s

Output:
- Print YES if palindrome, otherwise NO

Example:
Input:
level

Output:
YES

Explanation: String reads same forwards and backwards*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];

    // Ask user for input
    printf("Enter a string: ");
    scanf("%s", s);

    int left = 0;
    int right = strlen(s) - 1;

    // Two-pointer comparison
    while (left < right) {
        if (s[left] != s[right]) {
            printf("Result: String is not Palindrome \n");
            return 0;
        }
        left++;
        right--;
    }

    printf("Result: YES the string is Palindrome\n");
    return 0;
}
