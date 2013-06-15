/* ------------------------------------------------------------------- */
/* This program will convert temperatures from degrees Fahrenheit into degrees Celsius. */
/* Input temperature must be above absolute zero.*/
/* If input is not a number, it will be computed as 0.0
created Fall 2012 by Victoria C*/
#include <stdio.h>
int main( void )
{

double Absolute_Zero = -459.67; /* Input limit and temperature of Absolute Zero in Fahrenheit*/
double fahr = 0.0; /* Temperature in Fahrenheit degrees*/
double cels; /* Temperature in Celsius degrees*/

	puts( "\n Fahrenheit to Celsius Temperature Conversion Program" );
	puts("---------------------------------------------------------");
	printf( "\n Enter a temperature in Fahrenheit:" );
	scanf("%lf", &fahr); /* Double variable of Fahrenheit stored in memory*/

while (fahr < -459.67) { /* While loop for < Absolute Zero user error*/
	printf("\n ERROR! The number you have entered is less than -459.67 which is absolute zero in Fahrenheit. Please re-enter.\n");
	printf( "\n Enter a temperature in Fahrenheit:" );
	scanf( "%lf", &fahr);
}

	printf( "\n You have entered %lf\n", fahr);
	cels = (5.0/9.0)*(fahr-32.0); 
	printf("\n Temperature in Celsius is: %lf\n", cels);
	printf("\n Thank you for use the Fahrenheit to Celsius Temperature Conversion Program.\n"); 
	printf("\n The program will now terminate.\n");


return (0);
}
