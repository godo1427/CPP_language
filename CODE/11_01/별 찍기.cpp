#include <iostream>
using namespace std;

int main()
{
	int i, j, num;
	cin>>num;
	for(i=0;i<num;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=0;i<num;i++)
	{
		for(j=num;j>i;j--)
			cout<<"*";
		cout<<endl;
	}
	
}
