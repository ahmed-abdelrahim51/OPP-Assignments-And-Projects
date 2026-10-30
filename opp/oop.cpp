#include<iostream>
using namespace std;
class Rectangle
{
	private:
		float length;
		float width;
		public:
			void setLength (float l)
			{
				if (l >= 0)
				length = l;
				else
				 cout << "Error,Please enter only positive values";
				 }
				float getLength()
				{
					return length;
				}
				void setWidth (float w)
				{
					if (w >=0)
					width = w;
					else
					cout << "Error, Please enter only positive values";
				}
					float getwidth()
					{
						return width;
					}
					float getArea ()
					{
						return length*width;
					}
					}; // end of class
					int main ()
					{
						Rectangle box;
						box.setLength (40.5);
						box.setWidth (30.6);
						cout <<"the Rectangle area is "<< box.getArea ()<< "\n";
						return 0;
					}
					
				
			
