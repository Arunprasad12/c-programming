#include <stdio.h>
int main()
{
int a[50],i,number,square;
printf(" \n please enter size of array : ");

scanf("%d", &number);
printf("enter the elements to be squared");
for(i=0;i<number;i++)
scanf("%d",&a[i]);
for(i=0;i<number;i++)
{
square = a[i]*a[i];
printf("\n square of a given number %d is = %d", a[i], square);
}
return 0;
}
