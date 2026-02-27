#include <iostream>
using namespace std;
int main()
{
    int result;
    cout<<"Enter a large integer: "<<endl;
    cin>>result;

    int hours = result/3600;
    int minutes = (result%3600)/60;
    int seconds = (result%3600)%60;

    cout<<result<<" seconds is "<<hours<<" hours, "<<minutes<<" minutes, and "<<seconds<<" seconds."<<endl;

    return 0;

}