#include<iostream>
using namespace std;
int factorial(int x)
{
    int f=1;
    if(x==1 || x==0)
    return 1;
    f=x*factorial(x-1);
    return f;
}
int main()
{
    int a,ans;
    cout<<"\nEnter the value of a :";
    cin>>a;
    ans=factorial(a);
    cout<<"\nThe Factorial of "<<a<<" is : "<<ans;
    return 0;
}