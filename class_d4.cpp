// CONSTRUCTOR

 //default constructor

//  #include<iostream>
//  using namespace std;
//  class joy
//  {
//     public: joy()
//     {
//         cout<<"Constructor activated!!";
//     }

//     joy(int acno)
//     {
//         cout<<"Your balance is 9";
//     }
//  };
//  int main()
//  {
//     joy t;
//     joy b(101);
//  }


// #include<iostream>
// using namespace std;
// class Rbi
// {
// int amount;
// public:Rbi()
// {
//     amount=10000;
// }
// public: Rbi(Rbi &obj)
// {
// amount=obj.amount;
// cout<<"Balance:"<<amount<<"\n";
// }
// };
// int main()
// {
//     Rbi sbi;
//     Rbi pnb(sbi);
//     pnb;
// }



// #include<iostream>
// using namespace std;
// class Rbi
// {
// int amnt;
// public:Rbi()
// {
//     amnt=10000;
// }
// Rbi( Rbi &obj)
// {
    
// }
// };


// why class  is called user defined data type

// #include<iostream>
// using namespace std;
// class udf
// {
// public: int acno;
// char name[10];
// float balance;
// };
// int main()
// {
// udf obj;
// cout<<"Enter your Ac no:\n";
// cin>>obj.acno;
// cout<<"Enter your name\n:";
// cin>>obj.name;
// cout<<"Enter your Balance:";
// cin>>obj.balance;
// }


// DISTRUCTOR

// #include<iostream>
// using namespace std;
// class hello
// {
// public: hello()
// {
//     cout<<"Activated\n";
// }
// ~ hello()
// {
//     cout<<"Deactivated\n";
// }
// void hii()
// {
//     cout<<"Welcome!!";
// }
// };
// int main()
// {
//     hello h;
//     h.hii();
// }








// INHERITANCE

// 1.SINLE INHERITANCE
// 2.MULTI LEVEL INHERITANCE
// 3.MULTIPLE INHERITANCE
// 4.HYBRID INHERITANCE
// 5.HIERARICAL INHERITANCE 



// SYNTAX OF SINGLE INHERITANCE

// #include<iostream>
// using namespace std;
// class father
// {
//     int a,b;
//     public: void sum()
//     {
//         a=10;
//         b=20;
//         cout<<"Sum:"<<a+b<<"\n";
//     }
    
// };
// class child : public father
// {
//     int a,b;
//     public: void mul()
//     {
//         a=10;
//         b=20;
//         cout<<"mul:"<<a*b<<"\n";
//     }
    
// };
// int main()
// {
//     child f;
//     f.sum();
//     f.mul();
// }


// protected

// #include<iostream>
// using namespace std;
// class father
// {
//     protected:int a,b;
//     public: void sum()
//     {
//         a=10;
//         b=20;
//         cout<<"Sum:"<<a+b<<"\n";
//     }
    
// };
// class child : public father
// {
//     int a,b;
//     public: void mul()
//     {
//         a=10;
//         b=20;
//         cout<<"mul:"<<a*b<<"\n";
//     }
    
// };
// int main()
// {
//     child f;
//     f.sum();
//     f.mul();
// }


//MULTILEVEL INHERITANCE


// #include<iostream>
// using namespace std;
// class grandfather
// {
//     int a,b;
//     public: void sum()
//     {
//         a=10;
//         b=20;
//         cout<<"Sum:"<<a+b<<"\n";
//     }
    
// };
// class father : public grandfather
// {
//     int a,b;
//     public: void mul()
//     {
//         a=10;
//         b=20;
//         cout<<"mul:"<<a*b<<"\n";
//     }
    
// };
// class child : public father
// {
//     int a,b;
//     public: void sub()
//     {
//         a=10;
//         b=20;
//         cout<<"sub:"<<a-b<<"\n";
//     }
    
// };
// int main()
// {
//     child f;
//     f.sum();
//     f.mul();
//     f.sub();
// }



//MULTIPLE CLASS

// #include<iostream>
// using namespace std;
// class A
// {
//  public:void display()
//  {
//     cout<<"CLASS A\n";
//  }
// };
// class B
// {
//  public:void show()
//  {
//     cout<<"CLASS B\n";
//  }
// };
// class C :public A,public B
// {
//  public:void in()
//  {
//     cout<<"CLASS C\n";
//  }
// };
// int main()
// {
//     C obj;
//     obj.display();
//     obj.in();
//     obj.show(); 
// }


// #include<iostream>
// using namespace std;
// class RBI
// {
// public: void bank()
// {
//     cout<<"RBI \n";
// }
// };
// class AXIS: public RBI
// {
// public: void axisbank()
// {
//     cout<<"AXIS BANK \n";
// }
// };
// class SBI: public RBI
// {
// public: void sbibank()
// {
//     cout<<"SBI BANK \n";
// }
// };
// class PNB: public RBI
// {
// public: void pnbbank()
// {
//     cout<<"PNB BANK \n";
// }
// };

// int main()
// {
// SBI s;
// s.bank();
// s.sbibank();

// AXIS a;
// a.axisbank();
// a.bank();

// }

//----------------------------------------------------------------------------------------

// #include<iostream>
// using namespace std;
// class A
// {
// public:void a()
// {
//     cout<<"Class A\n";
// }
// };
// class B :public A
// {
// public:void b()
// {
//     cout<<"Class B\n";
// }
// };

// class C 
// {
// public:void c()
// {
//     cout<<"Class C\n";
// }
// };
// class D :public C
// {
// public:void d()
// {
//     cout<<"Class D\n";
// }
// };
// class E :public D
// {
// public:void e()
// {
//     cout<<"Class E\n";
// }
// };
// class F :public B,public E
// {
// public:void f()
// {
//     cout<<"Class F\n";
// }
// };
// int main()
// {
//     F obj;
//     obj.a();
//     obj.b();
//     obj.c();
//     obj.d();
//     obj.e();
//     obj.f();
// } 

// without 


// #include<iostream>
// using namespace std;
// class a
// {
// int ra=10;
// public: void s()
// {
// ra=ra+1;
// cout<<ra;
// }
// };
// int main()
// {
//     a r;
//     r.s();
// }

//------------------------------------------------------------------------------------------

// OPERATOR OVERLOADING

// #include<iostream>
// using namespace std;
// class opp
// {
// int a=9;    
// public:void operator++()
// {
// a=a+1;
// cout<<a<<"\n";
// }
// void operator--()
// {
// a=a-1;
// cout<<a<<"\n";
// }
// };
// int main()
// {
// opp obj;
// ++obj;
// --obj;
// }

   

// #include<iostream>
// using namespace std;
// class opp
// {
// int kg,gm;
// public:opp(int k,int g)
// {
// kg=k;
// gm=g;
// }
// public:void operator+(opp &obj)
// {
//     kg=kg+obj.kg;
//     gm=gm+obj.gm;
//     cout<<"kg="<<kg<<"\n";
//     cout<<"gm="<<gm<<"\n";
// }
// };
// int main()
// {
//     opp obj1(2,300);
//     opp obj2(4,677);
//     obj1+obj2;
// }
  
