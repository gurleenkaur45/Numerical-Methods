// Assignment-1
// Write a program to solve first order differential using Euler's Method in C

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x,y) 2*x*y
int main()
{
	float a,b,x,y,t,k,h;
	printf("Enter the value of x0 ,y0, h and xn");
	scanf(" %f%f%f%f",&a,&b,&h,&t);
	x=a;
	y=b;
	while(x<t)
	{
		k=h*f(x,y);
		y=y+k;
		x=x+h;
		printf("x=%f\ty=%f\n",x,y);
	}
	getch();
}
