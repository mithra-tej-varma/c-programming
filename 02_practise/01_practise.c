// to find area of the traingle by using heron's formula
#include<stdio.h>
#include<math.h> //this is used to get sqrt() function
int main(){
    int a,b,c;
    float s,area;
    printf("Enter sides of the triangle:");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("THe area of the triangle is: %f",area);
    return 0;
}
