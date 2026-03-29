#include<iostream>
using namespace std;
int main()
{
    int s;
    cout<<"Enter size of array:\n";
    cin>>s;
    int arr[s];
    int len;
    len=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter "<<s<<" Value:\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"Orignal Array:\n";
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<"\t";
    }
}