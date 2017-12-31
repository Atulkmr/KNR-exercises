#include <stdio.h>

int main(int argc, const char *argv[])
{
    printf("%d", getchar()!=EOF);
    /* use Ctrl-D to send EOF  */
    return 0;
}
