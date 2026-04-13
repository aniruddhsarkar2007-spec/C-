#include<iostream>
using namespace std;
int asc(int v)
{
    if(v==0)
    {
        return 0;
    }
    cout<<v<<"\t";
    asc(v-1);
}
int main()
{
    asc(10);
} 