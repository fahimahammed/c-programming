#include<stdio.h>

int main()
{
    int array[10][10], i, n, j, k;
    scanf("%d %d", &n, &k);

    if(n>=k){
        for(i<0; i<n; i++){
        for(j=0; j<n; j++){
            if(i<k){
               if(i == j){
                printf("1 ");
                }
                else{
                    printf("0 ");
                }
            }
            else printf("0 ");

        }
        printf("\n");
    }

    }

    else printf("-1");


}
