#include <iostream>
using namespace std;
int main(void)
{
	register int i;
	for(i=4;i>0;i--)
	{
		register int j = 10;
		j *= i;
		cout<<j<<"\t";
	}
	cout<<i<<endl;
	
	return 0;
}
