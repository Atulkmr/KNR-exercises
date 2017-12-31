#include <stdio.h>

int main(int argc, const char *argv[])
{
    printf("----Fahrenheit to Celsius-----\n");

    float fahr, celsius;
    int low=0, high=300, step=20;
    fahr = high;
    
    while(fahr >= low)
    {
	celsius = (5.0/9.0)*(fahr-32);
	printf("%3.0f %6.1f\n", fahr, celsius);
	fahr = fahr - step;
    }

    return 0;
}
