#include <iostream>
using namespace std;

class WhoAmI
{
	int id = 0;
	
	public:
		WhoAmI(int id);
		void ShowYourself() const;
 };
 
 WhoAmI::WhoAmI(int id){
 	this->id = id;
 }
 
 
 void WhoAmI::ShowYourself() const{
 	cout<<this->id<<endl;
 }
 int main()
 {
 	WhoAmI s1(3);
 	s1.ShowYourself();
 	
 }
