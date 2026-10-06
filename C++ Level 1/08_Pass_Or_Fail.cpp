#include <iostream>
using namespace std;

enum enPassOrFail { Pass = 1 , Fail = 2 };

int ReadMark()
{
    int Mark;

    cout << "Please Enter Your Mark" << endl;
    cin >> Mark;

    return Mark;

}

enPassOrFail CheckMark(int Mark)
{
    if (Mark >= 50)
        return enPassOrFail::Pass;
    else
        return enPassOrFail::Fail;
}

void PrintResult(int Mark)
{
    if (CheckMark(Mark) == enPassOrFail::Pass)
        cout << "\n You Passed" << endl;
    else 
        cout << "\n You Failed" << endl;
}


int main()
{
    
    PrintResult(ReadMark());

}


