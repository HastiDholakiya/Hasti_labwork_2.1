#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c,d,e,f,g; //data declaration
clrscr();
a=12; //data initialization
b=6;
c=a+b;
d=a-b;
e=a*b;
f=a/b;
g=a%b;
printf("Addiction of %d and %d is %d\n",a,b,c);
printf("Subtraction of %d and %d is %d\n",a,b,d);
printf("Multiplication of %d and %d is %d\n",a,b,e);
printf("Division of %d and %d is %d\n",a,b,f);
printf("Modulo of %d and %d is %d\n",a,b,g);
printf("12+6=18\n");
printf("12-6=6\n");
printf("12*6=72\n");
printf("12/6=2\n");
printf("12%6=0\n");
getch();
}