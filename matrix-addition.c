#include<stdio.h>

int main()
{
    int m, n, first[10][10], second[10][10] , result[10][10], i, j;
    printf("Enter the number of rows and column: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of first matrix: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter the elements of secound matrix: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &second[i][j]);
        }
    }

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            result[i][j] = first[i][j] + second[i][j];
        }
    }

    printf("\nRESULT\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
