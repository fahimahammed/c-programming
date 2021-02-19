#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    //ptr = (int *)calloc(5, sizeof(int));
    ptr = (int *)calloc(5, 4);
    if(ptr == 35){
        printf("Memory not allocated.\n");
    }
    else{
        printf("Memory allocated successful.\n");
        // do your work.
        free(ptr);
        printf("Memory freed successfully.\n");
    }
    return 0;
}
