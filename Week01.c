/*This program prompts the user for a temperature in Fahrenheit and displays the results to the screen. 

This program prompts the user for a temperature in Fahrenheit, converts the temperature to Celsius, and displays the result to the screen.

*/ 

#include <stdio.h>     //library for input and output

int main (void)
{
	// Variable declarations
	double tempInFahrenheit;
	double tempInCelsius;
	
	// Displays a prompt so the user knows what to do 
	printf("Enter the temperature in Fahrenheit: ");
	
	// Reads the number typd by the user, and saves it into
	// the variable tempInFahrenheit
	scanf("%lf", &tempInFahrenheit);
	
	// Computes the temperature in Celsius
	tempInCelsius = (tempInFahrenheit - 32) / 1.8;
	
	// T(F) - 32 / 1.8 // conversion formula for refrence
	
	// Displays the temperature in Celsius
	printf("%.2f F converts to %.2f degrees C", tempInFahrenheit, tempInCelsius);
	
	system("pause");
	
	// All C Programs need this at the end of main
	return (0);
			
}
