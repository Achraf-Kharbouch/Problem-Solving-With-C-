#include <iostream>
#include <cmath>

using namespace std;

float ReadRadius()
{
	float R;

	cout << "Please enter R " << endl;
	cin >> R;

	return R;
}

float CalculateCircleArea(float R)
{
	const float  PI = 3.141592653589793238;

	float CircleArea = PI * pow(R, 2);

	return CircleArea;
}

void PrintCircleArea(float CircleARea)
{

	cout << "\nThe circle area is " << CircleARea << endl;

}

int main()
{
   
	PrintCircleArea(CalculateCircleArea(ReadRadius()));

}

