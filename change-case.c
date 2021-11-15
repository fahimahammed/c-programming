#include<stdio.h>
#include<string.h>


void changeCase(char str[])
{
    for(int i=0; i<= strlen(str); i++){
        if(str[i]>=65 && str[i]<=90){
            str[i] = str[i]+32;
        }
        else if(str[i]>=97 && str[i]<= 122){
            str[i] = str[i] - 32;
        }
    }
    printf("\nConverted String: %s\n", str);
}

int main()
{
    char word[20];

    printf("Enter a string: ");
    scanf("%s", &word);

    changeCase(word);
    return 0;
}
