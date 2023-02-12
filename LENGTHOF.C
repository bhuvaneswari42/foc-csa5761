#include<stdio.h>
#include<conio.h>
void main()
{
char s[] = "programming is fun";
int i ;
clrscr();
for(i = 0; s[i] !='\0';++i)
printf("length of the string: %d", i);
getch();
}