#include <iostream>
#define SIZE_A 100
using namespace std;
const int size_B = 200;

int main(void)
{
	int x = 2, yA;
	yA = x*SIZE_A;
	cout << "yA= " << yA <<endl;
	
	int yB;
	yB = x*size_B;
	cout<<"yB= "<<yB<<endl;
	
	return 0;
}


