//���� ���
class Airplane //���̽�Ŭ����
{
	public:
		Airplane(int altiude = 5000, int capacity = 100): itsAltitude(altitude),
			itsCapacity(capacity) {	cout<<"Airplane ������ ..." <<endl;}
		virtual ~Airplane(){cout<<"Airplane �Ҹ��� ... "<<endl;	}
		const int GetAltitude() const {return itsAltitude; }
		const int GetCapacity() const {return itsCapacity; }
		virtual void Fly()const {cout<<"Airplane is flying" << "at the altitude of" <<GetAltitude()<<"feet."<<endl; }
		
	protected:
		int itsAltitude;
		int itsCapacity;
 };
 
 class Boat //���̽�Ŭ���� 
 {
 	public:
	 	Boat(int speed = 50, int capacity = 20) : itsSpeed(speed),
		 		itsCapacity(capacity) {cout << "Boat ������..."<<endl; }
		virtual ~Boat() {cout<<"Boat �Ҹ��� ..."<<endl;	}
		const int GetSpeed() const {return itsSpeed; }
		const int GetCapacity() const {return itsCapacity; }
		virtual void Float() const {cout<< "Boat is floating!" <<endl; }
	protected:
		int itsSpeed;
		int itsCapacity;
 };
 
 class Flyingboat : public Airplane, public Boat	//���� ���
 {
 	public:
 		Flyingboat(int altitude = 1000, int speed = 30, int capacity = 4)
 				:Airplane(altitude, capacity), Boat(speed, capacity)
 			{cout << "Flyingboat ������..." <<endl; }
 		virtual ~Flyingboat(){cout << "Flyingboat �Ҹ���..."<<endl; }
 		virtual void Fly() const //������
		 {cout<<"Flyingboat can fly at the altitude of"<<Airplane::GetAltitude()<<"feet"<<endl;  }
		 virtual void Float() const //������
		 	{cout<<"Flyingoat can float with the speed of"<<Boat::GetSpeed()<<","<<endl;  } 
  } ;
  
  
  
