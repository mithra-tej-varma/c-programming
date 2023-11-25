//program to celsius to fahrenheit temperature
#include<stdio.h>
int main(){
    float celcius , fahrenheit;
    printf("Enter temperature in celcius: ");
    scanf("%f",&celcius);
    fahrenheit = (celcius*1.8)+32;
    printf("The temperature in fahrenheit : %f",fahrenheit);
    return 0;
}