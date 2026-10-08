#include <iostream>
using namespace std;

void ReadNumbers(int &A , int &B)
{
    cout << "Please Enter Number a" << endl;
    cin >> A;

    cout << "Please Enter Number b" << endl;
    cin >> B;
}

int CalculateRectangleArea(int A, int B)
{

    return A * B;

}

void PrintResult(int RectangleArea)
{

    cout << "The Rectangle Area is " << RectangleArea << endl;

}

int main()
{
    int A, B;

    ReadNumbers(A, B);
    PrintResult(CalculateRectangleArea(A, B));

}


