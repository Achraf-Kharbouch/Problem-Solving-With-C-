#include <iostream>
using namespace std;

struct stInfo
{

	string FirstName;
	string LastName;


};

stInfo ReadInfo()
{

	stInfo info;

	cout << "please enter your first name" << endl;
	cin >> info.FirstName;

	cout << "please enter your last name" << endl;
	cin >> info.LastName;

	return info;

}

string GetFullName(stInfo info, bool reversed)
{

	string FullName ;
	if (reversed)
		FullName = info.LastName + " " + info.FirstName;
	else
	    FullName = info.FirstName + " " + info.LastName;
	return FullName;

}

void PrintFullName (string FullName)
{

	cout << " your full name is: " << FullName << endl;


}


int main()
{
   

	PrintFullName(GetFullName(ReadInfo(), true));


}

