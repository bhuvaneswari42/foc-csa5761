#include<stdio.h>
#include<conio.h>
int cube(int);
void main()
{
 int x,n;
 clrscr();
 printf("enter the nth element :");
 scanf("%d", &n);
 for(x=1;x<=n;x++)
 printf("%d ",cube(x));
 printf("\n");
 getch();
 }
 int cube(int y)
 {
 return y*y*y;
 }