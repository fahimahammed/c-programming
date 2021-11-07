#include<stdio.h>

int main()
{
    char str[20];
    printf("Enter a string: ");
    scanf("%s", &str);

    int length = strlen(str); // length of entered string

    for (int i=0; i<length; i++){
        if((str[i]<= 'Z' && str[i] >= 'A') || (str[i]<= 'z' && str[i] >= 'a') ){
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}
