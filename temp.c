#include <stdio.h>
#include <stdlib.h>

// Convert Fahrenheit to Celsius (integer approximation)
int convertToCelsius(int f) {
    return (f - 32) * 5 / 9;
}

int main(void) {
    char tempStr[10];   // Buffer for temperature input
    int tempF;          // Fahrenheit temperature
    int tempC;          // Celsius temperature


    // Prompt and read the temperature as a string
    printf("Enter temperature in F: ");
    gets(tempStr);
    tempF = atoi(tempStr);

    // Convert temperature to Celsius
    tempC = convertToCelsius(tempF);

    // Display the result
    printf("%d F = %d C\n", tempF, tempC);

    // Prompt before exit
    printf("Press ENTER to exit.\n");
    gets(tempStr);  // Wait for ENTER key

    return 0;
}
