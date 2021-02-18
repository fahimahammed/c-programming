#include<stdio.h>
int main(){
    int a,b,c, *p1, *p2, *p3;
    a = 34;
    b = 57;
    c = 23;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    if(*p1 > *p2 && *p1 > *p3){
        printf("%d is largest number. ",*p1);
    }
    else if(*p2 > *p1 && *p2 > *p3){
        printf("%d is largest number. ", *p2);
    }
    else {
        printf("%d is largest number. ", *p3);
    }

}
