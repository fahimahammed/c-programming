#include<stdio.h>

int main(void)
{
  int c, d, p, q, m, n, k, sum = 0;
  int first[10][10], secound[10][10], mul[10][10];

  printf("Enter the number of rows and columns for 1st matrix \n");
  scanf("%d %d", &m, &n);

  printf("Enter your matrix elements : \n");
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);

  printf("Enter the number of rows and columns for 2nd matrix\n");
  scanf("%d %d", &p, &q);

  if (n != p)
    printf("Cannot be multiplied..\n");
  else
  {
    printf("Enter elements for 2nd matrix:\n");

    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &secound[c][d] );

        // MUlTIPLICATION
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k] * secound[k][d];
        }
        mul[c][d] = sum;
        sum = 0;
      }
    }

    printf(" RESULT::\n ");
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d \t", mul[c][d] );
      printf(" \n ");
    }
  }
  return 0;
}
