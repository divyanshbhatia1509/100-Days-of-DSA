/*
Problem:
Given a matrix, calculate the sum of its primary diagonal elements.
The primary diagonal consists of elements where row index equals column index.

Input:
- First line: two integers m and n
- Next m lines: n integers each

Output:
- Print the sum of the primary diagonal elements
*/

#include <stdio.h>

int main() {
    
    int m, n;
    int sum = 0;

    // Asking user for matrix dimensions
    printf("Enter number of rows (m) and columns (n): ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    // Asking user to enter matrix elements
    printf("Enter the matrix elements:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating sum of primary diagonal elements
    for(int i = 0; i < m && i < n; i++) {
        sum += matrix[i][i];
    }

    // Printing the result
    printf("Sum of primary diagonal elements = %d\n", sum);

    return 0;
}
