#include  <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<< "Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"After swapping..."<<endl;
    cout<<"The value of a is "<<a<<" the value of b is "<<b<<endl;
        return 0;
}