#include<iostream>
using namespace std;
const double inch_per_feet=12.0;
int main()
{
	int inch;
	cout<<"请输入你个身高（英寸）_____";
	cin>>inch;
	cout<<"你的身高是："<<inch/inch_per_feet<<"feet";
	return 0;
}