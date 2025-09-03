#include<stdio.h>
int main()
{
float minutes,hours;
printf("enter minutes: ");
scanf("%f",&minutes);
hours=minutes/60.0;
printf("%.2f minutes is equal to %.2f hours.\n",minutes,hours);
return 0;
}
