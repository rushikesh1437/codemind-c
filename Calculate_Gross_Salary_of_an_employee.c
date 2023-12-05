#include<stdio.h>
int main ()
{
float s,h,d;
scanf("%f%f%f", &s,&h,&d);
float p=s*12/100; 
float g=s+h+d+p;
printf ("%.2f
%.2f",p,g);
}