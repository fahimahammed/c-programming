#include<stdio.h>

int main() {
   int size, row, column = 0, count = 0, sum, sum1, sum2;
   printf("Enter square matrix order: ");
   scanf("%d", &size);
   int matrix[size][size];

   // Input matrix element.
   printf("\nEnter matrix element : \n");
   for (row = 0; row < size; row++) {
      for (column = 0; column < size; column++)
         scanf("%d", &matrix[row][column]);
   }

   // Print matrix
   printf("Entered matrix is : \n");
   for (row = 0; row < size; row++) {
      printf("\n");
      for (column = 0; column < size; column++) {
         printf("%d\t", matrix[row][column]);
      }
   }

   //For diagonal elements
   sum = 0;
   for (row = 0; row < size; row++) {
      for (column = 0; column < size; column++) {
         if (row == column)
            sum = sum + matrix[row][column];
      }
   }

   //For Rows
   for (row = 0; row < size; row++) {
      sum1 = 0;
      for (column = 0; column < size; column++) {
         sum1 = sum1 + matrix[row][column];
      }
      if (sum == sum1){
        count = 1;
      }

      else {
         count = 0;
         break;
      }
   }

   //For Columns
   for (row = 0; row < size; row++) {
      sum2 = 0;
      for (column = 0; column < size; column++) {
         sum2 = sum2 + matrix[column][row];
      }
      if (sum == sum2){
        count = 1;
      }

      else {
         count = 0;
         break;
      }
   }

   // take decision
   if (count == 1){
    printf("\n\nMagic Matrix\n");
   }

   else{
     printf("\nNo Magic Matrix\n");
   }

   return 0;
}
