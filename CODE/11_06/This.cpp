#include <iostream>
using namespace std;

class student
{
	private:
		int id, score;
	public:
		student (int i, int s): id(i), score(s) {}  // 초기화
		//student (int i, int s) { id = i, score = s} //초기화 
		student up_score(){score = score + 5; return (*this);}
		student down_score(){score = score -5; return (*this);}
		unsigned address() {return ((unsigned) this);}
		void print(){cout<<id<<"="<<score<<endl;}
};

int main(void)
{
	student s1(11031, 90), s2(11032, 90), s3(11033, 90);
	s1.print();
	
	cout<<"at"<<&s1<<endl;
	s2.up_score().print();
	cout<<"at"<<s2.address()<<endl;
	s3.down_score().print();
	cout<<"at"<<s3.address()<<endl;
	
	return 0;
}
