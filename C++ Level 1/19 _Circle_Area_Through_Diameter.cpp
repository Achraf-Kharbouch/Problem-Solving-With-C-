#include <iostream>
#include <cmath>

using namespace std;

float ReadDiameter()
{
    float D;

    cout << "Please enter number D" << endl;
    cin >> D;

    return D;
}

float CalculateCircleAreaThroughDiameter(float D)
{

    const float PI = 3.141592653589793238;

    float CircleArea = (PI * pow(D, 2)) / 4;

    return CircleArea;

}

void PrintCircleArea(float CircleArea)
{

    cout << "\nThe circle area through diameter is " << CircleArea << endl;

}

int main()
{

    PrintCircleArea(CalculateCircleAreaThroughDiameter(ReadDiameter()));

}