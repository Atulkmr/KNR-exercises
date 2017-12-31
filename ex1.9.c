#include<stdio.h>

int main()
{
    int state=0;
    char c;
    while((c=getchar())!=EOF)
    {
	if(state==0 && c==' ')
	    state = 1;
	else if(state==1 && c==' ')
	    continue;
	else
	    state = 0;
	printf("%c",c);
    }
}
