/*
Program:  FcnClasswork
Made by:  Garrett Stanifer
Date:  3/15/2021
Finds average and product of 3 integers using functions
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float average(int a, int b, int c);  //Prototypes
int input(int lower, int upper);
void printResults(float ave, int prod);  
int product(int a, int b, int c);

int main()
{
	int a, b, c;
	float ave;
	int prod;
	int lower = 1;
	int upper = 25;
	a = input(lower, upper);
	b = input(lower, upper);
	c = input(lower, upper);
	ave = average(a, b, c);
	prod = product(a, b, c);
	printResults(ave, prod);
	return 0;
}

float average(int a, int b, int c)  //Function for average
{
	float av;
	av = (a + b + c) / 3.0;
	return av;
}

int input(int lower, int upper)  //Function for scanning inputs
{
	int x;
	printf("Enter a number between %d and %d\n", lower, upper);
	scanf("%d", &x);
	return x;
}

void printResults(float ave, int prod)  //Function for printing results
{
	printf("The average of the three integers is %.2f.\n", ave);
	printf("The product is %d.\n", prod);
}

int product(int a, int b, int c)  //Function for product
{
	int pr;
	pr = a * b * c;
	return pr;
}
