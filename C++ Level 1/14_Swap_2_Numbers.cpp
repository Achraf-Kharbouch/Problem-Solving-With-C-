#include <iostream>
using namespace std;

void ReadNumbers (int &num1 , int &num2)
{
    cout << "please enter the first number" << endl;
    cin >> num1;

    cout << "please enter the second number" << endl;
    cin >> num2;
}

void SwapNumbers(int &num1 , int &num2 )
{
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

}

void PrintResult(int num1 , int num2)
{
    cout<< endl << "Number1 = " << num1 << endl;
    cout << "Number2 = " << num2 << endl;

}

int main()
{
    int num1, num2;

    ReadNumbers(num1, num2);
    PrintResult(num1, num2);
    SwapNumbers(num1, num2);
    PrintResult(num1, num2);


}

