#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>
using namespace std;

class Student{
	private:
		string name;
		int rollNumber;
		float gpa;
	
	public:
		Student()
		{
			name = "Muhammad Khan";
			rollNumber = 2629;
			gpa = 3.6l;
		}
		
		Student(string n, int rollNum, float g)
		{
			name = n;
			rollNumber = rollNum;
			gpa = g;
		}
		
		void setName(string n)
		{
			name = n;
		}
		
		void setRollNumber(int roll)
		{
			rollNumber = roll;
		}
		
		void setGpa(float g)
		{
			gpa = g;
		}
		
		string getName() const
		{
			return name;
		}
		
		int getRollNumber() const
		{
			return rollNumber;
		}
		
		float getGpa() const
		{
			return gpa;
		}
		
		void getData()
		{
			cout<<"Enter the Student name: "<<endl;
			getline(cin, name);
			
			cout<<"Enter the Student Roll Number: "<<endl;
			cin>>rollNumber;
			cin.ignore();
			
			cout<<"Enter the Student GPA: "<<endl;
			cin>>gpa;
			cin.ignore();
			
		}
		
		void showData()
		{
			cout<<"--------------------Student Info--------------------"<<endl;
			cout<<"Student Name: "<<name<<endl;
			cout<<"Roll Number: "<<rollNumber<<endl;
			cout<<"GPA: "<<gpa<<endl;
		}
};

#endif




