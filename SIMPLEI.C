#include<stdio.h>
int main()
{
 float principle,time,rate,si;
 /*input principle,rate and time*/
 printf("enter the principle (amount):");
 scanf("%f",&principle );
 printf("enter time:");
 scanf("%f",&time);
 printf ("enter rate:");
 scanf("%f",&rate);
 /*calculate simple interest*/
 si=(principle*time*rate)/100;
 /*print the resultant value of si*/
 printf("simple interest=%f",si);
 return 0;
 }