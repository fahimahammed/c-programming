//pointer

#include<stdio.h>
int main(){
    int x = 10, y=11;
    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;
    printf("x: %d, y: %d, ptr1: %d, ptr2: %d",*ptr1, *ptr2, ptr1, ptr2);
}
