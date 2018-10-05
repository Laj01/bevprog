#include "std_lib_facilities.h"

int main()
{
	double a=0;
	double sum=0;
	double small=1.0/0.0;
	double large=-1.0/0.0;
	double convert_metre=0;
	const double m=1;		//1m = 100 cm  1in = 2.54cm 1ft = 12 in//
	const double cm=0.01;
	const double in=0.0254;
	const double ft=12*0.0254;
	int input_sum=0;
	string unit=" ";			

	vector<double>v;

		cout<<"Please enter a number followed by a unit:"<<endl;
		cout<<"Valid units are 'cm', 'm', 'in', 'ft'."<<endl;

	while(cin>>a>>unit)
		{		
		if(unit=="m")
			{
			convert_metre=a;
			sum+=convert_metre;
			v.push_back(convert_metre);
			++input_sum;
			}
		else if(unit=="cm")
			{
			convert_metre=a*cm;
			sum+=convert_metre;
			v.push_back(convert_metre);
			++input_sum;
			}
		else if(unit=="in")
			{
			convert_metre=a*in;
			sum+=convert_metre;
			v.push_back(convert_metre);
			++input_sum;
			}
		else if(unit=="ft")
			{
			convert_metre=a*ft;
			sum+=convert_metre;
			v.push_back(convert_metre);
			++input_sum;
			}
		else
			{
			cout<<"**Invalid or missing unit type!**"<<endl;
			break;
			}
		
		cout<<"**Total lenght of given values: "<<sum<<" metres."<<endl;
		cout<<"**Total number of given values: "<<input_sum<<endl;

		if(a==small || a<small)
			{
			small=a;
			}
		if(a>large)
			{
			large=a;
			}

		cout<<"**"<< small << " is the smallest value so far."<<endl;
		cout<<"**"<< large << " is the largest value so far."<<endl;
		sort(v);
			for(int i=0; i<v.size();++i)
			{
			cout<<v[i]<<" m"<<endl;
			}
		}
	return 0;
}
