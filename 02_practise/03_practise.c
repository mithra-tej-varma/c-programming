//program to convert fahrenheit to celcius temperature
#include<stdio.h>
int main(){
    float celcius , fahrenheit;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f",&fahrenheit);
    celcius = (fahrenheit-32)/1.8;
    printf("The temperature in celsius : %f",celcius);
    return 0;
}