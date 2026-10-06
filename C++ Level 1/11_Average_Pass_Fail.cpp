#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };


void ReadMarks (int &mark1 , int &mark2 , int &mark3)
{
    cout << "please enter you first mark" << endl;
    cin >> mark1;

    cout << "please enter your second mark" << endl;
    cin >> mark2;

    cout << "please enter your third mark" << endl;
    cin >> mark3;
}

int SumOf3Marks (int mark1 , int mark2 , int mark3)
{

    return (float)(mark1 + mark2 + mark3) ;

}

float CalculateAverage (int mark1, int mark2, int mark3)
{

    return (float)SumOf3Marks(mark1, mark2, mark3) / 3;

}

enPassFail CheckAverage(float Average)
{
    if (Average >= 50)
        return enPassFail::Pass;
    else 
        return enPassFail::Fail;
}

void PrintResults(float Average)
{
    cout << " Your Average is : " << Average << endl;

    if (CheckAverage(Average) == enPassFail::Pass)
        cout << " You Passed" << endl;
    else
        cout << " You Failed" << endl;
}

int main()
{

    int mark1, mark2, mark3;
    ReadMarks(mark1, mark2, mark3);
    PrintResults(CalculateAverage(mark1, mark2, mark3));


}

