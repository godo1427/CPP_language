#include <iostream>
using namespace std;

int main(void)
{
	unsigned short int Day;
	enum Week{Mon, Tue, Wed, Thu, Fri, Sat, Sun	};
	Week Weekend;
	cout<<"Week: Mon_0, Tue_1, Wed_2, Thu_3, Fri_4, Sat_5, Sun_6 \n";
	cout<<"Weekend: Sat_5, Sun_6\n";
	cout<<"�ָ���? ";
	cin>>Day;
	Weekend = (Week)Day;
	if((Weekend==Sat)||(Weekend == Sun))
		cout<<"�ָ��Դϴ�."<<endl;
	else
		cout<<"�ָ��� �ƴմϴ�.";
		
	return 0;
}
