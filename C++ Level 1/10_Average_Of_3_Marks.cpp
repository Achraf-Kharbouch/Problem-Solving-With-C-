#include <iostream>
using namespace std;

void ReadMarks(int& Mark1, int &Mark2, int &Mark3 )
{

	cout << "please enter your first mark" << endl;
	cin >> Mark1;

	cout << "please enter your second mark" << endl;
	cin >> Mark2;

	cout << "please enter your third mark" << endl;
	cin >> Mark3;


}

int SumOf3Marks (int Mark1, int Mark2, int Mark3)
{

	return (Mark1 + Mark2 + Mark3) ;


}

float CalculateAverage (int Mark1 , int Mark2 , int Mark3)
{

	return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;

}

void PrintResult(float Average)
{

	cout << "the average of your marks is " << Average << endl;

}


int main()
{
  
	int Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2,  Mark3);
	PrintResult(CalculateAverage(Mark1, Mark2, Mark3));


}

