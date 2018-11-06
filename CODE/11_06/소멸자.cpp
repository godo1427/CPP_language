#include <iostream>
using namespace std;

class student
{
	private:
		int score;
		char *name;
	public:
		student (int size, const char str[], int s);   //»ı¼ºÀÚ
		~student(){delete []name;}
		void print(){cout<<name<<"="<<score<<endl;}		 
};

student::student(int size, const char str[], int s)
{
	name = new char[size];
	for(int i=0;i<size&&str[i]!='\0';i++)
		name[i] = str[i];
	score = s;
}
int main(void)
{
	student s1(8, "chulsoo", 90);
	if(1){
		student s2(7,"soonee", 85);
		s2.print();
	}
	s1.print();
}
