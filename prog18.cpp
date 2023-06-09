#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a,b;
    cout<<"\nEnter the value of a";
    cin>>a;
    cout<<"\nEnter the value of b";
    cin>>b;
    swap(a,b);
    cout<<"\nThe value of a and b after swapping is : a="<<a<<"\tb="<<b;
    return 0;
}