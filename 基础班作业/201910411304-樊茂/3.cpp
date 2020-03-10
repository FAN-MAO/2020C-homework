#include<iostream>
using namespace std;
const double a=60;
int main()
{
	double degrees,minutes, seconds;
	double c,d,e;
	cout<<"First enter the degrees:";
	cin>>degrees;
	cout<<"Next enter the minutes of arc:";
	cin>>minutes;
	cout<<"Finally enter the seconds of arc:";
	cin>>seconds;
	c=minutes/a;
	d=(seconds/a)/a;
	e=c+d;
	cout<<degrees<<"degrees,"<<minutes<<"minutes,"<<seconds<<"seconds"<<"="<<d<<"d";
}
