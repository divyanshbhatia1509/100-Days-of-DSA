#include <stdio.h>

/*
Problem: Write a program to check whether a given square matrix 
is an Identity Matrix.

An identity matrix is a square matrix in which:
- All diagonal elements are 1
- All non-diagonal elements are 0

Input:
- First line: integer n representing number of rows and columns
- Next n lines: n integers each representing the matrix elements

Output:
- Print "Identity Matrix" if the matrix satisfies the condition
- Otherwise, print "Not an Identity Matrix"
*/

int main() {
    
    int n;
    
    // Taking input for size of matrix
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    int isIdentity = 1;  // Assume matrix is identity
    
    // Taking matrix input
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Checking identity matrix condition
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            
            if(i == j) {
                // Diagonal elements must be 1
                if(matrix[i][j] != 1) {
                    isIdentity = 0;
                    break;
                }
            } else {
                // Non-diagonal elements must be 0
                if(matrix[i][j] != 0) {
                    isIdentity = 0;
                    break;
                }
            }
        }
        if(isIdentity == 0)
            break;
    }
    
    // Printing result
    if(isIdentity == 1)
        printf("Identity Matrix\n");
    else
        printf("Not an Identity Matrix\n");
    
    return 0;
}
