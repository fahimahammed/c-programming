#include<stdio.h>

// function of reverse string
void reverseStr(char str[])
{
    int length = strlen(str); // find length of entered string
    for(int i=length - 1; i>=0; i--){
        printf("%c",str[i]);
    }

}

int main()
{
    char X[10];
    printf("Enter a string: ");
    scanf("%s", &X); // input string
    printf("\nYour entered string: %s\n", X);
    printf("Reversed string: ");
    // call reverstring function.
    reverseStr(X);

    printf("\n");
    return 0;
}
