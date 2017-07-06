#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>
#include <ctype.h>

void lower(char arr[])
{
    int i,len;
    i = 0;
    len = strlen(arr);
    
    for (i = 0; i < len; ++i)
        arr[i] = (isupper(arr[i])?arr[i] -'A' + 'a' : arr[i]);   
}

int main()
{
    char arr[100];
    scanf("%s",arr);
    lower(arr);
    printf("%s",arr);
}
