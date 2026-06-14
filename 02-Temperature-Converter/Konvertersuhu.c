#include <stdio.h>
    float celciustofahrenheit(float celcius){
        return (celcius *9/5)+32;
}
    float fahrenheittocelcius(float fahrenheit){
        return (fahrenheit-32)*5/9;
    }
int main(){
    float temperature;
    int choice;

        printf ("---TEMPERATURE CONVERTER---\n");
        printf ("1. Celcius to Fahrenheit\n");
        printf ("2. Fahrenheit to Celcius\n");
        printf ("Choose (1/2) : ");
        scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celcius : ");
            scanf(" %f", &temperature);
            printf("Result : %.2f F\n", celciustofahrenheit(temperature));
            break;
        case 2:
            printf("Enter Temperature in Fahrenheit : ");
            scanf(" %f", &temperature);
            printf("Result : %.2f C\n", fahrenheittocelcius(temperature));
            break;
        default:
            printf("Invalid choice!\n");
    
    }

    return 0;
    

}