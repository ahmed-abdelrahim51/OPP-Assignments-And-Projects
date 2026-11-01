#include<iostream>
using namespace std;
class Employee
{
	private:
		string name;
		int ID;
		float Age;
		long salary;
		public:
			void getData ()
			{
				cout <<" Enter employee name:\n";
				cin >>name;
				cout <<"Enter employee ID:\n";
				cin >>ID;
				cout <<"Enter employee Age:\n";
				cin >>Age;
				cout <<"Enter employee salary:\n";
				cin >> salary;
			}
			void showData ()
			{
				cout <<"Employee name is:"<< name<<endl;
				cout <<"Employee ID is:"<< ID<<endl;
				cout <<"Employee Age is:"<< Age<<endl;
				cout <<"Employee salary is:"<< salary<<endl;
			}
		};
		int main()
		{
			Employee emp[3];
			for(int i=0;i<3;i++)
			{
			cout <<"Enter the data for employee no:"<<i+1<<endl;
			cout <<"------------------------------\n";
			emp[i].getData();
		}
		for(int i=0;i<3;i++)
		{
		cout <<"\n\n print the data for employee no:"<<i+1<<endl;
		cout <<"------------------------------------\n";
		emp[i].showData();
	}
	return 0;
}
	
		
