/*
Problem: Write a program to check whether a given matrix is symmetric.
A matrix is said to be symmetric if:
1. It is a square matrix (number of rows = number of columns)
2. element[i][j] == element[j][i] for all valid i and j

Input:
- First line: two integers m and n representing rows and columns
- Next m lines: n integers representing matrix elements

Output:
- Print "Symmetric Matrix" if the matrix is symmetric
- Otherwise, print "Not a Symmetric Matrix"
*/

#include <stdio.h>

int main() {
    int m, n;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if matrix is square
    if(m != n) {
        printf("Not a Symmetric Matrix");
        return 0;
    }

    // Check symmetric condition
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                printf("Not a Symmetric Matrix");
                return 0;
            }
        }
    }

    printf("Symmetric Matrix");

    return 0;
}
