#include<iostream>
using namespace std;
class Employee
{
	private:
		string empName;
		int empId;
		float empSal;
		string empEmail;
		string empSkills[3];
    public:
    	void setData();
    	float getSal();
    	string getEmail();
    	string getName();
    	int getId();
    	void display();
    	
};
void Employee::setData()
{
	cout<<"\n enter the emp Name = \n";
	cin.ignore();
	getline(cin,empName);
	cout<<"\n enter the emp  id = \n";
	cin>>empId;
	cout<<"\n enter the emp  sal = \n";
	cin>>empSal;
	cout<<"\n enter the emp email = \n";
	cin>>empEmail;
	cout<<"\n enter the emp  3 skills = \n";
	for(int i=0;i<3;i++)
	{
		cout<<"\n skills["<<i+1<<"] =";
		cin>>empSkills[i];
		
	}
}
	float Employee::getSal()
	{
		return empSal;
	}
	
    string Employee::getName()
    {
    	return empName;
    	
	}
	int Employee::getId()
	{
		return empId;
	}
	void Employee::display()
	{
		cout<<"\n ________________________________\n";
		cout<<"\n empid="<<empId;
		cout<<"\n empName="<<empName;
		cout<<"\n empsal="<<empSal;
		cout<<"\n empEmail="<<empEmail;
		cout<<"\n skills =";
		for(int i=0;i<3;i++)
		cout<<i+1<<":"<<empSkills[i]<<endl;
	}
	
