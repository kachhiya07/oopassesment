//Data members:
//a) Name of the lecturer
//b) Name of the subject
//c) Name of course
//d) Number of lecturers


//Data functions:
//a) To assign initial values
//b) To add a lecture details
//c) To display name and lecture details 

#include<iostream>
using namespace std;
class lecture{
	public:
	
		string name,subject,course;
		
};
int main()
{
	int i;
	lecture obj[5];
	for(i=0;i<5;i++)
	{
		cout<<"lecturer no : "<<i+1<<endl;
		cout<<"enter lecturer name : ";
		cin>>obj[i].name;
		cout<<"enter subject name:";
		cin>>obj[i].subject;
		cout<<"enter course name:";
		cin>>obj[i].course;
		cout<<endl;
	}
	cout<<"-----display of lecturer------"<<endl;
	for(i=0;i<5;i++)
	{
	cout<<"lecturer:"<<i+1<<endl;
	cout<<" lecturer name : ";
	cout<<obj[i].name<<endl;
	cout<<" subject name : ";
	cout<<obj[i].subject<<endl;
	cout<<"course name : ";
	cout<<obj[i].course<<endl;
	cout<<endl;
	}

	
}
