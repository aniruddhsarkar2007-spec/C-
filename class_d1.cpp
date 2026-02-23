#include<iostream>
using namespace std;

class joy
{
 int a,b;
public:void sum()
{
  cout<<"Enter a";
  cin>>a;
  cout<<"Enter b";
  cin>>b;
  cout<<a+b<<"\n";
}
};
int main()
{
   joy j;
   j.sum();
}


#include<iostream>
using namespace std;
class student
{
    char c;
  public: int a,b;
};
int main()
{
    student obj;
    obj.a=900;
    cout<<obj.a;  

}


#include<iostream>
using namespace std;
class pl
{
int a=900;
public: void hello()
{
  cout<<a;
}
};
int main()
{
  pl ob;
  ob.hello();
}



#include<iostream>
using namespace std;
class p1
{ 
int a=10;
int b=2;
public: void sum()
{
  cout<<a+b<<"\n";
}

void mul()
{
  cout<<a*b;
}

private: void div()
{
  cout<<a/b;
}
};
int main()
{
  p1 ob;
  ob.sum();
}