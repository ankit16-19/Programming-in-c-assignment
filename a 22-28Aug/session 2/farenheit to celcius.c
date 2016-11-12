//fahrenheit to celsius
#include <stdio.h>
main()
{

int fahrenheit;
float celsius;

printf("Enter the temperature in degrees fahrenheit:\n");
scanf("%d", &fahrenheit);
celsius = ((fahrenheit-32)*5)/9.0;
printf("%f",celsius);
printf ("The converted temperature is %.2f\n", celsius);


}
