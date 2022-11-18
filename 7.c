#include<stdio.h>
void main() {
int num,i;
printf("\nEnter a number:");
scanf("%d",&num);
printf("\nMultiplication table");
for (i = 1;i<=10;i++)
{
    printf("\n%d x %d = ",i,num);
    printf("%d",num*i);
}

}