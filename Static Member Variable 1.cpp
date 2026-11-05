#include<iostream>
using namespace std;
class Rectangle
{
private:
	static float length;
	float width;
	public:
		Rectangle(float l,float w)
		{
			length=l;
			width=w;
			cout <<"Start"<<endl;
		}
		float get_Area()
		{
			return length*width;
		}
		float get_Perimeter()
		{
			return 2 *(length + width);
		}
		~Rectangle()
		{
			cout <<"End of  program"<<endl;
		}
};
        float Rectangle::length=0;
        int main()
        {
        	Rectangle Rec1(5,6),Rec2(4,2);
        	cout<<"Area of Rectangle is:"<<Rec1.get_Area()<<endl;
        	cout<<"Perimeter of Rectangle is:"<<Rec1.get_Perimeter()<<endl;
        	return 0;
		}
		
	