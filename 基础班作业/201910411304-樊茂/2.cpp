#include<iostream>
using namespace std;
const double inchs_per_foot=12.0;
const double meters_per_inch=0.0254;
const double pounds_per_kg=2.2;
int main()
{
	double inch;double foot ;double pound;
	double high;double weight;
	cout<<"�����������ߣ�Ӣ�ߣ�:";
	cin>>foot;
	cout<<"�����������ߣ�Ӣ�磩��";
	cin>>inch;
	cout<<"������������أ�Ӣ������";
	cin>>pound;
	high=(foot*inchs_per_foot+inch)*meters_per_inch;
	weight=pound*pounds_per_kg;
	cout<<"the BMI is:"<<weight/(high*high);
}

