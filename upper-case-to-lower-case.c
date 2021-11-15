// Upper case to lower case conversion


#include<stdio.h>
#include<string.h>

int main()
{
    char word[50];
    int length;
    printf("Enter your string: ");
    scanf("%s", &word);

    length = strlen(word);

    for(int i=0; i<=length; i++){
        if(word[i]>=65 && word[i]<=90){
            word[i] = word[i] + 32;
        }
    }

    printf("\nConverted String: %s\n", word);
    return 0;
}
