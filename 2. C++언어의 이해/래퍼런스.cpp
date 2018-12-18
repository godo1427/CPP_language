#include <iostream>
using namespace std;

int main(void)
{
	int data = 100;
	int &rdata = data;
	cout << data << " " << rdata << endl;
	cout << &data << " " << &rdata << endl;
}
