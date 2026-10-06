#include <iostream>
using namespace std;

void  ReadNumbers(int &num1 , int &num2)
{

    cout << "please enter the first number" << endl;
    cin >> num1;

    cout << "please enter the second number" << endl;
    cin >> num2;

}

int MaxOf2Numbers (int num1 , int num2)
{

    if (num1 > num2)
        return num1;
    else
        return num2;


}

void PrintResult(int Max)
{

    cout << " The Maximum Number is : " << Max << endl;

}



int main()
{
    
    int num1, num2;
    ReadNumbers(num1, num2);
    PrintResult(MaxOf2Numbers(num1, num2));


}

