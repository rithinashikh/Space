#include<stdio.h>
void main() {
float mark;
printf("\nEnter the total mark:");
scanf("%f",&mark);
if (mark>100 || mark<0)
{
    printf("\nWarning !!! Your mark should be in the range of 1 to 100" );
}
else
{
    if (mark>=90)
    printf("\nYou have secured A grade");
    else if(mark>=80) 
    printf("\nYou have secured B grade");
    else if(mark>=70) 
    printf("\nYou have secured C grade");
    else if(mark>=60) 
    printf("\nYou have secured D grade");
    else if(mark>=50) 
    printf("\nYou have secured E grade");
    else 
    printf("\nYou have failed !!!");
}

}
