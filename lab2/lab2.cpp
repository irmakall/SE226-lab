#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Please enter a positive integer greater than 9: ";
    cin>>x;
    int count = 0;
    cout<<x;
    while (x>9)
    {
        int currentSum=0;
        int tempX=x;
        while (tempX>0)
        {
            currentSum+=(tempX%10);
            tempX=tempX/10;
        }
        x=currentSum;
        count++;
        cout<<" → "<<currentSum;

    }
    cout<<"\nFinal value: "<<x<<endl;
    cout<<"Total steps: "<<count<<endl;

    int y;
    cout << "Please enter a number between 10 and 100: ";
    while (true)
    {
        cin>>y;
        if (y>=10 && y<=100) break;
        cout<<"Invalid input. Please enter a number between 10 and 100: ";
    }

    int fizz=0;
    int buzz=0;
    int fizzbuzz=0;
    for (int i =1;i<=y;i++)
    {
        if (i % 7 ==0)
        {
            cout<<"("<<i<<" is skipped)"<<endl;
            continue;
        }
        if (i % 3 == 0 && i % 5 == 0)
        {
            fizzbuzz++;
            cout<<"FizzBuzz"<<endl;
        }
        else if (i % 3 == 0)
        {
            fizz++;
            cout<<"Fizz"<<endl;
        }else if (i % 5 == 0)
        {
            buzz++;
            cout<<"Buzz"<<endl;
        }else
        {
            cout<<i<<endl;
        }
    }
    cout<<"--- Summary ---"<<endl<<
        "Fizz count : "<<fizz<<endl<<
        "Buzz count : "<<buzz<<endl<<
        "FizzBuzz count: "<<fizzbuzz<<endl;


    int a;
    cout<<"Please enter a number between 3 and 9: ";
    cin>>a;
    for (int i=1; i<=2*a-1; i++)
    {
        int k = a - abs(a-i);
        for (int j=1; j<=k; j++)
        {
            cout<<j;
        }
        cout<<endl;

    }
    return 0;
}

