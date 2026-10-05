#include <iostream>
using namespace std;

struct stInfo
{
    int Age;
    bool HasDrivingLicense;

};

stInfo ReadInfo()
{
    stInfo info;

    cout << "please enter your age" << endl;
    cin >> info.Age;

    cout << "please enter if you have a driver license" << endl;
    cin >> info.HasDrivingLicense;

    return info;
}

bool IsAccepted(stInfo info)
{

    return (info.Age > 21 && info.HasDrivingLicense);

}

void PrintResult (stInfo info)
{
    if (IsAccepted(info))
        cout << "Hired" << endl;
    else
        cout << "Rejected" << endl;

}


int main()
{
    
    PrintResult(ReadInfo());

}


