#include<stdio.h>

int main()
{
    int array[10][10], i, n, j, count=0;
    printf("Enter number of a matrix: ");
    scanf("%d", &n);

    printf("Enter array elements\n");
    for(i = 0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &array[i][j]);
        }
    }

   for(i=0; i<n-1; i++){
    for(j=0; j<n-1; j++){
        if(array[i][j] == array[i+1][j+1]){
           count ++;
        }

    }
   }
   if(count == n){
    printf("Yes\n");
   }
   else{
        printf("No\n");
   }
}
