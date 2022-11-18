#include<stdio.h>
void main() {
	int P;
    float R,n,SI;
	printf("\nEnter the principal amount: ");
	scanf("%d", &P);
	printf("\nEnter the rate of interest: ");
	scanf("%f", &R);
    printf("\nEnter the number of years: ");
	scanf("%f", &n);
    SI = (P*n*R)/100;
    printf("\nSimple interest:: %f", SI);
}