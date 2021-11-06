// faf
#include<stdio.h>

// function of check position of char as in alphabet ...
int countChar(char X[])
{
    int count = 0;
    int length = strlen(X);  // find length of string

    for(int i=0; i<length; i++){
        // check position of char
        if(i == (X[i] - 'a') || i == (X[i] - 'A')){
            count ++;
        }
    }
    return count;
}

int main()
{
    char X[30];
    printf("Enter your string: ");
    // input string
    scanf("%s", &X);
    printf("\nYour given string: %s", X);
    printf("\nNumbers of characters are same position : %d \n", countChar(X));

    return 0;
}
