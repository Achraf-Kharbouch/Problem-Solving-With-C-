#include <iostream>
#include <cmath>

using namespace std;

void ReadNumbers(float &A , float &D)
{
    cout << "Please Enter Number A" << endl;
    cin >> A;

    cout << "Please Enter Number D" << endl;
    cin >> D;
}

float RectangleAreaBySideAndDiagonal (float A, float D)
{

    return A * (sqrt(pow(D, 2) - pow(A, 2)));

}

void PrintResult(float RectangleArea)
{

    cout << "The Rectangle Area Through Diagonal and Side Area is " << RectangleArea << endl;

}

int main()
{
    float A, D;

    ReadNumbers(A, D);
    PrintResult(RectangleAreaBySideAndDiagonal(A, D));



}

