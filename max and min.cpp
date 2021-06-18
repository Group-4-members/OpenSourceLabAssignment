#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter the size of array\n";
	cin>>x;
	int a[x];
	int max,min;
	cout<<"Enter "<<x<<" Elements "<<endl;
	for(int i=0;i<x;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<x;i++){
		
	max=a[0];
	min=a[0];
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i<min])
		{
			min=a[i];
		}
	}
	cout<<"The maxmum number in the entered array is "<<max<<endl;
	cout<<"min ="<<min;
	return 0;
}
