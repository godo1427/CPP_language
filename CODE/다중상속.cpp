//다중 상속
class Airplane //베이스클래스
{
	public:
		Airplane(int altiude = 5000, int capacity = 100): itsAltitude(altitude),
			itsCapacity(capacity) {	cout<<"Airplane 생성자 ..." <<endl;}
		virtual ~Airplane(){cout<<"Airplane 소멸자 ... "<<endl;	}
		const int GetAltitude() const {return itsAltitude; }
		const int GetCapacity() const {return itsCapacity; }
		virtual void Fly()const {cout<<"Airplane is flying" << "at the altitude of" <<GetAltitude()<<"feet."<<endl; }
		
	protected:
		int itsAltitude;
		int itsCapacity;
 };
 
 class Boat //베이스클래스 
 {
 	public:
	 	Boat(int speed = 50, int capacity = 20) : itsSpeed(speed),
		 		itsCapacity(capacity) {cout << "Boat 생성자..."<<endl; }
		virtual ~Boat() {cout<<"Boat 소멸자 ..."<<endl;	}
		const int GetSpeed() const {return itsSpeed; }
		const int GetCapacity() const {return itsCapacity; }
		virtual void Float() const {cout<< "Boat is floating!" <<endl; }
	protected:
		int itsSpeed;
		int itsCapacity;
 };
 
 class Flyingboat : public Airplane, public Boat	//다중 상속
 {
 	public:
 		Flyingboat(int altitude = 1000, int speed = 30, int capacity = 4)
 				:Airplane(altitude, capacity), Boat(speed, capacity)
 			{cout << "Flyingboat 생성자..." <<endl; }
 		virtual ~Flyingboat(){cout << "Flyingboat 소멸자..."<<endl; }
 		virtual void Fly() const //재정의
		 {cout<<"Flyingboat can fly at the altitude of"<<Airplane::GetAltitude()<<"feet"<<endl;  }
		 virtual void Float() const //재정의
		 	{cout<<"Flyingoat can float with the speed of"<<Boat::GetSpeed()<<","<<endl;  } 
  } ;
  
  
  
