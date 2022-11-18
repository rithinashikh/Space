#include<stdio.h>
void main() {
	int num1;
    float num2, sum;
	printf("\nEnter the first number: ");
	scanf("%d", &num1);
	printf("\nEnter the second number: ");
	scanf("%f", &num2);
    sum = num1+num2;
    printf("\nSum:%f", sum);
}