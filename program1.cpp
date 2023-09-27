
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
	private:
	
		string name,subject,course;
	public:
		void get()
		{
		cout<<"enter lecturer name : ";
		cin>>name;
		cout<<"enter subject name:";
		cin>>subject;
		cout<<"enter course name:";
		cin>>course;
		cout<<endl;
				
		}
		void display()
	{
			cout<<" lecturer name : ";
			cout<<name<<endl;
			cout<<" subject name : ";
			cout<<subject<<endl;
			cout<<"course name : ";
			cout<<course<<endl;
			cout<<endl;
		
	}
		
};
int main()
{
	int i;
	lecture obj[5];
	

	for(i=0;i<5;i++)
	{
		cout<<"lecturer no : "<<i+1<<endl;
		obj[i].get();
		
	}
	cout<<"-----display of lecturer------"<<endl;
	for(i=0;i<5;i++)
	{
	
		obj[i].display();
		
	}

	return 0;
}
