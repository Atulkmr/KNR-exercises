#include <stdio.h>

int main(int argc, const char *argv[])
{
    printf("----Celsius to Fahrenheit-----\n");

    float fahr, celsius;
    int low=0, high=300, step=20;
    celsius = low;
    
    while(celsius<=high)
    {
	fahr = celsius*(9.0/5.0) + 32;
	printf("%3.0f %6.1f\n", celsius, fahr);
	celsius += step;
    }
    return 0;
}
