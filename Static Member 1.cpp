#include<iostream>
using namespace std;
class Rectangle
{
  private:
  	float length;
  	float width;
  	static int count;
 public:
 	Rectangle()
 	{
 		length = 0.0;
 		width = 0.0;
 		count++;
	 }
	 Rectangle(float l,float w)
	 {
	 	length = l;
	 	width = w;
	 }
	 void setlength(float l)
	 {
	 	length = l;
	 }
	 void setwidth(float w)
	 {
	 	width = w;
	 }
	 void setcount(float c)
	 {
	 	count = c;
	 }
	 int getcount()
	 {
	 	return count;
	 }
	 float getArea()
	 {
	 	return length*width;
	 }
};
int Rectangle::count=0;
int main()
{
Rectangle R1,R2,R3;
cout <<"the value of count is:"<<R3.getcount()<<endl;  // if getcount() static we can use Rectangle::getcount()
return 0;
}
