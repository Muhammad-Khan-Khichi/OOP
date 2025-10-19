#include "student.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Student s1;
	s1.showData();
	cout<<endl;
	
	Student s2("Ali", 2620, 3.7);
	s2.showData();
	cout<<endl;
	
	Student s3;
	s3.getData();
	s3.showData();
	
	return 0;
}