//complete the program below
//its a program to find the average value.
#include<iostream>

using namespace std;

double avg(double m,double n);

int main()
{
	double m=0.0;
	double n=0.0;

	cout<<"Enter first number"<<endl;
	cin>>m;
	cout<<"Enter second number"<<endl;
	cin>>n;
	std::cin.get();
   avg(m,n);
	cout<<"Average is: "<</*function here*/avg(m,n)<<endl;
	
	
	
}

double avg(double m,double n)
{
	/*return the average value of x and y*/
	double average;
    average=(m+n)/2;
	return average;
}
