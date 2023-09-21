#include<iostream>
using namespace std;
class teacher {

		int no_of_lectures,i;
		string lecturer,subject,course,lectures;

	public:
		teacher() {
			cout<<"what is name of lecturer ? :";
			cin>>lecturer;
			cout<<"enter subject:";
			cin>>subject;
			cout<<"name of course ? :";
			cin>>course;

		}
		void add_details() {
			cout<<"enter 5 lectures:"<<endl;
			for(i=1; i<=5; i++) {
				cin>>lectures;
			}
		}

		void display() {
			cout<<"lecturer name is :"<<lecturer<<endl;
			for(i=1; i<=5; i++) {
				cout<<"lecture is "<<lectures<<endl;
			}
		}

};
int main() {
	teacher t;
	t.add_details();
	t.display();




	return 0;
}
