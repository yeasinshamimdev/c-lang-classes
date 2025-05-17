#include <stdio.h>
int main()
{
    int choise;
    float temp, convertedTemp;
    printf("Temperature conversion menu\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Covert Fahrenheit to Celcius\n");
    printf("Enter your choise: ");
    scanf("%d", &choise);

    switch (choise)
    {
    case 1:
    {
        printf("Enter the Celcius temperature : ");
        scanf("%f", &temp);
        convertedTemp = (1.8 * temp) + 32;
        printf("The Fahrenheit temperature is: %.2f", convertedTemp);
        break;
    }
    case 2:
    {
        printf("Enter the Fahrenheit temperature : ");
        scanf("%f", &temp);
        convertedTemp = (temp - 32) / 1.8;

        printf("The Celcius temperature is: %.2f", convertedTemp);
        break;
    }

    default:
        printf("Not a correct option");
    }
    return 0;
}