#include <stdio.h>

int main() {
    int r, c;

    // Question: Ask the user to enter number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];

    // Question: Take matrix elements as input from the user
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Question: Initialize boundary variables for spiral traversal
    int top = 0, bottom = r - 1;
    int left = 0, right = c - 1;

    // Question: Print elements in clockwise spiral order
    printf("Spiral Traversal Output:\n");

    while (top <= bottom && left <= right) {

        // Question: Traverse the top row from left to right
        for (int j = left; j <= right; j++) {
            printf("%d ", matrix[top][j]);
        }
        top++;

        // Question: Traverse the right column from top to bottom
        for (int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;

        // Question: Traverse the bottom row from right to left (if valid)
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                printf("%d ", matrix[bottom][j]);
            }
            bottom--;
        }

        // Question: Traverse the left column from bottom to top (if valid)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }

    return 0;
}
