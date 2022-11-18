#include<stdio.h>
void main() {
int i,n, sum=0;
printf("\nEnter a limit:");
scanf("%d",&n);
for(i=n;i>0;i--)
{
    if(i%2!=0)
    {
        sum=sum+i;
    }
}
printf("Sum of odd numbers:%d",sum);
}
