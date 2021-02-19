#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr1, *ptr2;
    ptr1 = (int *)malloc(5*sizeof(int));
    ptr2 = (int *)calloc(5, sizeof(int));

    //check memory allocation or not.
    //here, 35 is initial memory value.
    if(ptr1 == 35 || ptr2 == 35){
        printf("Memory allocation is not successful. =%d, =%d\n",ptr1,ptr2);
    }
    else{
        printf("Memory allocation successful. =%d, =%d\n",ptr1,ptr2);

        //memory freed
        free(ptr1);
        printf("Ptr1 Memory freed. =%d\n",ptr1);
        free(ptr2);
        printf("ptr2 Memory freed. =%d\n",ptr2);

        //memory reallocation.
        realloc(ptr1, 20);
        printf("ptr1 Memory reallocated. =%d\n",ptr1);
        realloc(ptr2, 20);
        printf("ptr2 Memory reallocated. =%d\n",ptr2);
    }
}
