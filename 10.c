#include<stdio.h>
void main() {
int a[20],b[20],temp,n;
printf("\nEnter the size of arrays:");
scanf("%d",&n);
printf("\nEnter the values of Array 1:");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("\nEnter the values of Array 2:");
for(int i=0;i<n;i++)
{
    scanf("%d",&b[i]);
}

for(int i=0;i<n;i++)
{
    temp=a[i];
    a[i]=b[i];
    b[i]=temp;
}

printf("\nArray 1:");
for(int i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
printf("\nArray 2:");
for(int i=0;i<n;i++)
{
    printf("%d\t",b[i]);
}

}