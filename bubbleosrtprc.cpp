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
//     cout<<"Enter "<<s<<" Value:\n";
//     for(int i=0;i<len;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Orignal Array:\n";
//     for(int i=0;i<len;i++)
//     {
//         cout<<arr[i]<<"\t";
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int s;
//     cout<<"Enter the size of array:\n";
//     cin>>s;
//     int arr[s];
//     int temp;
//     cout<<"Enter "<<s<<" Values:\n";
//     for(int i=0;i<s;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Orignal Array:\t";
//     for(int i=0;i<s;i++)
//     {
//         cout<<arr[i]<<"\n";
//     }
//     cout<<"Sorted array\n";
//     for(int  i=0;i<s;i++)
//     {
//         for(int j=0;j<s;j++)
//         {
//             if(arr[j]>arr[j+1]){
//             temp=arr[i];
//             arr[i]=arr[j+1];
//             arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<s;i++)
//     {
//         cout<<arr[i];
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
// int s;
// cout<<"Enter the size of array:";
// cin>>s;
// int arr[s];
// int temp;
// int c=0;
// int flag;
// cout<<"Enter "<<s<<" Values:\n";
// for(int i=0;i<s;i++)
// {
//     cin>>arr[i];
// }
// cout<<"Orignal Array"<<"\n";
// for(int i=0;i<s;i++)
// {
//     cout<<arr[i]<<"\n";
// }
// cout<<"Sorted array:\n";
// for(int i=0;i<s;i++)
// {flag=0;
//     for(int j=0;j<s-1-i;j++)
//     {
//         if(arr[j]>arr[j+1])
//         {
//             temp=arr[i];
//             arr[i]=arr[j+1];
//             arr[j+1]=temp;
//             flag++;
//         }
//         c++;
//     }
//     if(flag==0)
//     {
//         break;
//     }
// }
// for(int i=0;i<s;i++)
// {
//     cout<<arr[i]<<"\n";
// }
// cout<<"no of iteration:"<<c;
// }



#include<iostream>
using namespace std;
int main()
{
    int s;
    cout<<"Enter the size of:";
    cin>>s;
    int arr[s];
    int c=0;
    int flag;
    int temp;
    cout<<"Enter "<<s<<" Values:";
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }

    cout<<"Orignal Array:\n";
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\n";
    }
    cout<<"Sorted Array:\n";
    for(int i=0;i<s;i++)
    {
        flag=0;
         for(int j=0;j<s-1-i;j++)
         {
            if(arr[j]>arr[j+1])
            {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
             flag++;
            }
            c++;
         }
         if(flag==0)
         {
            break;
         }
    }
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\n";
    }
    cout<<"No of iteration:"<<c;
}