#include <iostream>
using namespace std;


void swapValues(int* p1, int*p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
void printArray(int* arr, int size)
{
    for (int i=0;i<size;i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
}
int findMax(int* arr, int size)
{
    int max=*arr;
    for (int i=1;i<size;i++)
    {
        if (*(arr+i)>max) max=*(arr+i);
    }
    return max;
}
void reverseArray(int* arr, int size)
{

    int *first=arr;
    int *last=(arr+size-1);
    while (first<last)
    {
        swapValues(first,last);
        first++;
        last--;
    }
}

int* createArray(int size)
{
    int *arr=new int[size];
    return arr;

}
void deleteArray(int* arr)
{
    delete[] arr;
}

int main()
{

    int size;
    cout<<"Creating dynamic array..."<<endl<<endl;
    cout<<"Enter array size: ";
    cin>>size;

    int *arr= createArray(size);
    cout<<"Enter values: ";

    for(int i=0;i<size;i++)
    {
        cin>>*(arr+i);
    }
    cout<<endl;
    cout<<"Array elements: "<<endl;
    printArray(arr,size);

    cout<<endl<<"Maximum element: "<<findMax(arr,size)<<endl;
    cout<<"----------------------------------"<<endl;

    int a=5;
    int b=8;
    cout<<"Swapping two numbers"<<endl<<endl;
    cout<<"Before swap"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    swapValues(&a,&b);
    cout<<endl<<"After swap"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"----------------------------------"<<endl;

    cout<<"Reversing array..."<<endl<<endl;
    cout<<"Array after reverseArray: "<<endl;
    reverseArray(arr,size);
    printArray(arr,size);
    cout<<"----------------------------------"<<endl;
    cout<<"Deleting array..."<<endl;
    deleteArray(arr);
    cout<<"Memory released successfully.";


    return 0;

}