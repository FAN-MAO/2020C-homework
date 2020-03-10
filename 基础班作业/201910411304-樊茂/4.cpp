#include<iostream>
using namespace std;
const int a=24;
const int b=60;
const int c=60;
int main()
{
	long seconds;
	int day, hour,minute,second;
	cout<<"Enter the number of seconds:";
	cin>>seconds;
	 day=seconds/(a*b*c);
	 hour=seconds%(a*b*c)/(b*c);
	 minute=seconds%(a*b*c)%(b*c)/b;
	 seconds=seconds%(a*b*c)%(b*c)&b;
	 cout<<seconds<<"seconds="<<day<<"day,"<<hour<<"hour,"<<minute<<"minute,"<<second<<"second";
}