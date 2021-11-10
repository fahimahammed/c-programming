#include<stdio.h>

int main(){

    char str[20];
    int i=0;

    printf("Enter the string: ");
    gets(str);
    while(str[i]!='\0'){
        i++;
    }

    printf("\nLength of [ %s ] is [ %d ]\n", str, i);
    return 0;
}
