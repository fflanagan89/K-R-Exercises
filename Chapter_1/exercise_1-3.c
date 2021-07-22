/*Exercise 1-3. Modify the temperature conversion program to print a heading above the table*/
#include <stdio.h>


main()
{
    float fahr, celsius;
    int upper, lower, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%1s %4s\n", "Fahr","Celsius");            /* heading */
    printf("%3s\n","------------");
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
