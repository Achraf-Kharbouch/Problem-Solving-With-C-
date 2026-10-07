#include <iostream>
using namespace std;

void ReadNumbers(int &num1 , int &num2 , int &num3)
{
    cout << "please enter the first number " << endl;
    cin >> num1;

    cout << "please enter the second number " << endl;
    cin >> num2;

    cout << "please enter the third number " << endl;
    cin >> num3;
}

int MaxOf3Numbers(int num1 , int num2 , int num3)
{
    if (num1 > num2)
        if (num1 > num3)
            return num1;
        else
            return num3;
    else
        if (num2 > num3)
            return num2;
        else
            return num3;
}

void PrintResult (int Max)
{
    
    cout << "the maximum number is " << Max << endl;

}

int main()
{
    int num1, num2, num3;
    ReadNumbers(num1, num2, num3);
    PrintResult(MaxOf3Numbers(num1, num2, num3));
}

