#include <iostream>
using namespace std;

int total;

int g(int n,int r)
{
    if (n<0) return 0;
    total+=pow(r,n);
    g(n-1,r);
    return total;
}
int main()
{
    int val1;
    cout<<"Enter number of terms: "<<endl;
    cin>>val1;
    cout<< g(val1,2);


}


