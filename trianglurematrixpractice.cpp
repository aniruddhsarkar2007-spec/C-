#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={2,3,5,7,5,3,8,5,3};
    cout<<"Upper Array\n";
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            if(c>r)
            {
             cout<<0<<"\t"; 
            }
            else{
                cout<<arr[r][c]<<"\t";
            }
        }
        cout<<"\n";
    }

     cout<<"lower Array\n";
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            if(c<r)
            {
             cout<<0<<"\t"; 
            }
            else{
                cout<<arr[r][c]<<"\t";
            }
        }
        cout<<"\n";
    }
}