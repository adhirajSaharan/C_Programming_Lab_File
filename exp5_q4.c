#include <stdio.h>

int main() {
    int m, n, p, q;
    
    // Read dimensions of matrix A
    printf("Enter number of rows and columns for matrix A (m n): ");
    scanf("%d %d", &m, &n);
    
    int A[m][n];
    
    // Read matrix A elements
    printf("Enter elements of matrix A (row-wise):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    // Read dimensions of matrix B
    printf("Enter number of rows and columns for matrix B (p q): ");
    scanf("%d %d", &p, &q);
    
    int B[p][q];
    
    // Read matrix B elements
    printf("Enter elements of matrix B (row-wise):\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    // Check compatibility for multiplication: n (cols of A) should be equal to p (rows of B)
    if (n != p) {
        printf("Matrix multiplication not possible due to incompatible dimensions.\n");
        return 1;
    }
    
    int product[m][q];
    
    // Initialize product matrix to zero
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < q; ++j)
            product[i][j] = 0;
    
    // Multiply matrices A and B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // Print matrix A
    printf("\nMatrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", A[i][j]);
        printf("\n");
    }
    
    // Print matrix B
    printf("\nMatrix B (%d x %d):\n", p, q);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++)
            printf("%d\t", B[i][j]);
        printf("\n");
    }
    
    // Print product matrix
    printf("\nProduct of A and B (%d x %d):\n", m, q);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++)
            printf("%d\t", product[i][j]);
        printf("\n");
    }
    
    return 0;
}
