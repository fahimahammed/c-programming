#include <stdio.h>

int main()
{
    char str[100];
    int counter;

    printf("\nEnter a string: ");
    gets(str);

    for(counter=0;str[counter]!=NULL;counter++)
    {
        if(str[counter]>='A' && str[counter]<='Z'){
            str[counter]=str[counter]+32;
        }

        else if(str[counter]>='a' && str[counter]<='z'){
            str[counter]=str[counter]-32;
        }
    }

    printf("\nToggle string: %s \n",str);
    return 0;
}
