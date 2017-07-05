#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>
#include <ctype.h>

int htoi(char arr[])
{
    int i,len;
    long long temp, num;
    temp = num = 0;
    len = strlen(arr);
    i = 0;

    if(arr[0]=='0' && len>=2 && (arr[1]=='x' || arr[1]=='X'))
        i = 2;
    for (i ; i < len ; ++i) 
    {
        if(isdigit(arr[i]))
            temp = arr[i] - '0';
        else if(arr[i]>='A' && arr[i]<='Z')
            temp = arr[i] - 'A' + 10;
        else if(arr[i]>='a' && arr[i]<='z')
            temp = arr[i] - 'a' + 10;
        num = num*16 + temp;
    }
    return num;
}
int main()
{
    char arr[100];
    scanf("%s",arr);
    printf("%d",htoi(arr));
}
