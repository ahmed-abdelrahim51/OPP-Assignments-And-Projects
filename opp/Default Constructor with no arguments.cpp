#include<iostream>
using namespace std;
class Rectangle
{
	private:
		float length;
		float width;
		public:
			Rectangle(float l= 2, float w = 3)
		{
				length =l;
			width =w;
			cout << "Hello\n";
			}
			float getArea()
			{
				return length*width;
			}
		};
		int main()
		{
			Rectangle Rec1;
			cout <<"Area of Rec1 is :"<< Rec1.getArea();
			return 0;
		}
