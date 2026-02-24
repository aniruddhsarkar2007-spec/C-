//FUNCTION DECLARE AND DEFINE INSIDE A CLASS


 #include<iostream>
 using namespace std;
 class s
 { 
 int a=90;
 int b=90;
 public: void sum()
 {
   cout<<"RESULT:"<<a+b<<"\n";
 }
 };
 int main()
 {
   s sub;
   sub.sum();
 }
  
//FUNCTION DECLARED INSIDE A CLASS BUT DEFINED OUTSIDE THE CLASS

#include<iostream>
using namespace std;
class sub
{
int a,b;
public: void sum();
void subs();
void div();
void mul();
};
void sub :: sum()
{
  a=90;
  b=90;
  cout<<"Result:"<<a+b<<"\n";
};
void sub :: subs()
{
  a=90;
  b=89;
  cout<<"Result:"<<a-b<<"\n";
};
void sub :: div()
{
  a=90;
  b=3;
  cout<<"Result:"<<a/b<<"\n  ";
};
void sub :: mul()
{
  a=90;
  b=2;
  cout<<"Result:"<<a*b;
};
int main()
{
  sub neww;
  neww.sum();
  neww.subs();
  neww.div();
  neww.mul();
}
