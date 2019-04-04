#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
	double n=100.0;
	double pi=3.1416;
	double integral=0.0;
	double m=0.5;
	
}

double funcion(double n)
{
for (int i=0; i<=n; i++)
{
std:: cout<<acos(i)<< std::endl;
}

}

double valoranalitic=-1.0; //segun wolframalpha

double sumarec(double n, double pi, double m, double integral, double funcion(double n))
{
for (int i=0; i<=((3*pi)/2); i++)
{
integral+= funcion(i)*m;

}
std::cout<<integral<< std::endl;
}

