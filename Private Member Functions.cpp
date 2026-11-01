#include<iostream>
using namespace std;
class Rectangle
{
	private:
		double width;
		double height;
		double get_width ()
		{
			return width;
		}
		double get_height ()
		{
			return height;
		}
		public:
			Rectangle (double w, double h)
			{
				width = w;
				height = h;
			}
			double get_area()
			{
				return get_width()* get_height();
			}
			double get_perimeter()
			{
				return 2* (get_width()+get_height());
			}
			~Rectangle()
			{
				cout<<"End of program"<<endl;
			}
		};
		int main()
		{
			Rectangle Rec1(3,2);
		cout<<"Area of the rectangle is:"<< Rec1.get_area()<<endl;
			cout<<"perimeter of rectangle is :"<< Rec1.get_perimeter()<<endl;
			return 0;
		}
