#include <iostream>
using namespace std;

void no_ret()
{
	int x = 0;
	static int y = 0;
	x++;
	y++;
	cout << "x°ª: "<<x<<" y°ª: "<<y<<endl;
}

int main(void)
{
	int i;
	for(i=0;i<3;i++)
		no_ret();
}
