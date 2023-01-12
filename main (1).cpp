#include <stdio.h> // Begin33
int main(void)
{
    float X,A,Y;
    printf("X:");
    scanf ("%f", &X);
    printf("A:");
    scanf ("%f", &A);
    printf("Y:");
    scanf ("%f", &Y);
    float price;
    price=A/X;
    printf("Цена:%f\n",price);
    printf("Стоимость:%f\n",Y*price);
    return 0;
}