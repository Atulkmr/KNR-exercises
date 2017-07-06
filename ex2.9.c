#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>
#include <ctype.h>

int countbits(unsigned x)
{
    int count = 1;
    while(x &= (x-1))
        count++;
    
    return count;
}
int main()
{
    unsigned int a;
    scanf("%u",&a);
    printf("%u\n",countbits(a));
}
/* EXPLANATION
 *
 * This works on a very simple observation.
 *
 * binary(4) = 100
 * binary(3) = 011
 *
 * binary(5) = 101
 * binary(4) = 100
 *
 * For any odd number, x-1, turns off the first bit which corresponds to 2^0.
 * For any even number, x-1, turns on all bits to the right of the least significant bit of x, and
 * turns off the least significant bit of x. See example 1.
 * Thus, taking an and of x & x-1 now turns of the least significant bit of x and leaves the rest 
 * bits untouched.
 */
