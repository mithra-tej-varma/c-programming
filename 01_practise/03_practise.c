// to do all airthmetic operations with only two variables
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a,b values:\n");
    scanf("%i%d",&a,&b);
    printf("%d + %d = %d\n",a,b,a+b);   
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %f\n",a,b,(float)a/b);// using explicit data type to give accurate value
    printf("%d %% %d = %d\n",a,b,a%b);
    return 0;
}