// #include<iostream>
// using namespace std;
// int main()
// {
//     int s;
//     cout<<"Enter size of array:\n";
//     cin>>s;
//     int arr[s];
//     int len;
//     len=sizeof(arr)/sizeof(arr[0]);
//     cout<<"Enter"<<""<<s<<""<<"Values\n";
//     for(int i=0;i<len;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Orignal Array:\n";
//     for(int  i=0;i<len;i++)
//     {
//         cout<<arr[i]<<"\t";
//     }


// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int s;
//     cout<<"Enter the size of array: \n";
//     cin>>s;
//     int arr[s];
//     int len;
//     len=sizeof(arr)/sizeof(arr[0]);
//     cout<<"Enter "<<s<<" Values \n";
//     for(int i=0;i<len;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Orignal \n";
//      for(int i=0;i<len;i++)
//     {
//         cout<<arr[i];
//     }

// }


#include<iostream>
using namespace std;
int main()
{
    int s;
    cout<<"ENTER SIZE OF ARRAY \n";
    cin>>s;
    int arr[s];
    int len;
    len=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter "<<s<<" Values \n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"ORIGNAL ARRAY: \n";
      for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<"\t";
    }
}