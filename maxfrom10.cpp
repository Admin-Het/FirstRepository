#include<iostream>
using namespace std;
void max()
{
    int i,x[10],maximum=0;
    for(i=1;i<=10;i++)
    {
        cin>>x[i];
        if(x[i]>maximum)
        maximum=x[i];
    }
    cout<<"\nThe Maximum From Entered is "<<maximum;
}
int main()
{
    cout<<"\nEnter 10 numbers";
    max();
}