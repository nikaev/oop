#include <iostream>
#include <string>
using namespace std;
class Student {
	private:
    	char name[20];
    	int studentid;
    	char studentmajor[20];
    	int studentgrade;

	public:
    	void input(void);
    	void display();
    	int n;
};

void Student::input()
{

    cout << "enter number of students\n";
    cin >> n;

    for (int i=0; i<n; i++)
    {
     cout<<"Enter Name:";
     cin>>name;
     cout<<"Enter Student ID:";
     cin>>studentid;
     cout<<"Enter Major:";
     cin>>studentmajor;
     cout<<"Enter Grade 0 to 100%:";
     cin>>studentgrade;
    }
}

void Student::display()
{
 cout<<"Student details:\n";
 cout<<"Name: "<< name << "\nStudent ID:" << studentid << "\nMajor:"<< studentmajor << "\nGrade:" << studentgrade;
}

int main()
 {
    Student s;
    s.input();
    s.display();
}
