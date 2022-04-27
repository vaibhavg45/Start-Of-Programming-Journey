#include <stdio.h>
void convert(char c)
{
    if(c>=65 && c<=90)
    {
        printf("The Character \"%c\" is already in Upper Case.",c);
    }
    else if(c>=97 && c<=122)
    {
        printf("The Character %c in Upper Case : %c",c,(c-32));
    }
    else
    {
        printf("Wrong Input");
    }
    return;
}
int main()
{
    char ch;
    printf("Enter a Character in Lower Case which is to be converted to Upper Case : ");
    scanf("%c",&ch);
    convert(ch);
    return 0;
}