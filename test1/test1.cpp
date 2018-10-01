// test1.cpp : Defines the entry point for the console application.
// 111 222 333 444 555 666

#include "stdafx.h"
#include "math.h"
#include "stdio.h"

float a, b, c, d, x1, x2;
int flag;


int _tmain(int argc, _TCHAR* argv[])
{   
	flag = 0;
	while (flag == 0)
	{ 
		printf("Vvedite a\n");
		if (scanf_s("%f", &a) == 1)
			flag = 1;
		else
			printf("Ne pravelnoe znachenie\n");
		getchar();

	}
	
	flag = 0;
	while (flag == 0)
	{
		printf("Vvedite b\n");
		if (scanf_s("%f", &b) == 1)
			flag = 1;
		else
			printf("Ne pravelnoe znachenie\n");
		getchar();

	}

	flag = 0;
	while (flag == 0)
	{
		printf("Vvedite c\n");
		if (scanf_s("%f", &c) == 1)
			flag = 1;
		else
			printf("Ne pravelnoe znachenie\n");
		getchar();

	}
	//scanf_s("%f", &a);
	//scanf_s("%f", &b);
	//scanf_s("%f", &c);
	if (a != 0)
	{
		d = (b*b) - (4 * a*c);
		if (d > 0)
		{
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			printf("x1 = %f\nx2 = %f", x1, x2);
		}
		else
		if (d == 0)
		{
			x1 = x2 = -b / (2 * a);
		}
		else 
			if (d < 0)
			printf("Net dejstvitelnix kornej (d<0)\n");
	}
	else
		printf("Uravnenie virojdennoe (a=0)\n");
	getchar();
	return 0;
}

