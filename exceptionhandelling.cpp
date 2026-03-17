#include<iostream>
using namespace std;
int main()
{
    int n=100;
    int v;
    cout<<"Enter any value to divide 100:";
    cin>>v;
    try 
    {
        if(v==0)
        {
            throw 34.5;
        }
        cout<<n/v;
    }
    catch(...)
    {
     cout<<"Server down"<<"\n";
    }
    cout<<"successfully completed";
}