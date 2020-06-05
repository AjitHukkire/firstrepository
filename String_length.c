#include<stdio.h>
int main()
{
    char str[20];
    int length=0;
    printf("Enter the string whose length should be calculated\n");
    scanf("%s",str);
    while(str[length]!='\0')
    {
        length++;
    }

    printf("Length of the string is =%d",length);

}
