#include <stdio.h>


int findLargestElement(int matrix[][3], int rows, int cols) {
    int largest = matrix[0][0]; 


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > largest) {
                largest = matrix[i][j]; 
            }
        }
    }

    return largest;
}

int main() {
    int matrix[3][3] = {
        {10, 5, 8},
        {3, 25, 12},
        {7, 15, 18}
    };
    int rows = 3;
    int cols = 3;

    int largestElement = findLargestElement(matrix, rows, cols);

    printf("The largest element in the 2D matrix is: %d\n", largestElement);

    return 0;
}

