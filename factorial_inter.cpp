#include<iostream>

int main()
	{
	
	//int n=77;
	double n=7;
	double fac=1;
	

	std::cout<<"ingrese un numero"<<std::endl;
	std::cin>>n;
	for (double i =1; i<=n; i++)
	{
	fac*=i;
	}
	std::cout<<"El factorial de "<< n <<"es"<<fac<<std::endl;
	}
