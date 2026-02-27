#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int point1_x, point1_y, point2_x, point2_y;

    cout<<"Enter for point 1 x: "<<endl;
    cin>>point1_x;
    cout<<"Enter for point 1 y: "<<endl;
    cin>>point1_y;
    cout<<"Enter for point 2 x: "<<endl;
    cin>>point2_x;
    cout<<"Enter for point 2 y: "<<endl;
    cin>>point2_y;

    double result = sqrt(pow(point2_x - point1_x, 2) + pow(point2_y - point1_y, 2));

    cout<<result<<endl;

    return 0;
}