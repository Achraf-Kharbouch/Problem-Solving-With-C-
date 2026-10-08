#include <iostream>
using namespace std;

void ReadNumbers(float &A , float &H)
{
    cout << "Please enter number A" << endl;
    cin >> A;

    cout << "Please enter number H" << endl;
    cin >> H;

}

float CalculateTriangleArea (float A , float H)
{
    float Area = (A / 2) * H;
    return Area;

}

void PrintResult (float TriangleArea)
{

    cout << "The triangle area is " << TriangleArea << endl;

}



int main()
{
    float A , H;
    ReadNumbers(A , H);
    PrintResult(CalculateTriangleArea(A, H));

}


