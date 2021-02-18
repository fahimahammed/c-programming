#include<stdio.h>
int main(){
    int num1 =  4, num2 = 5;
    int *ptr1 = &num1, *ptr2 = &num2;

    int sum = *ptr1 + *ptr2;
    printf("Sum: %d", sum);
}
