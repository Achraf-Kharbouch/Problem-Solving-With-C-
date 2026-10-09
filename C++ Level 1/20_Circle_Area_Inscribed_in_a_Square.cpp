#include <iostream>
#include <cmath>

using namespace std;

float ReadSquareSideLength()
{
	float A;

	cout << "Please enter square side A" << endl;
	cin >> A;

	return A;

}

float CircleAreaInscribedInSquare(float A)
{
	const float PI = 3.141592653589793238;

	float CircleArea = (PI * pow(A, 2)) / 4;

	return CircleArea;
}

void PrintCircleArea(float CircleArea)
{

	cout << "\nThe Circle Area Along the Circumference is " << CircleArea << endl;

}

int main()
{
   

	PrintCircleArea(CircleAreaInscribedInSquare(ReadSquareSideLength()));


}


