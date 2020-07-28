#include <stdio.h>

#define LOWER   0   // lower limit of the table
#define HIGHER  300 // higher limit of the table
#define STEP    20  // step size

// print Fahrenheit-Celsius table
main() 
{
    int fahr;

    for (fahr = HIGHER; fahr >= LOWER; fahr = fahr - STEP)
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}