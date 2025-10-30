#include<iostream>
#include<iomanip>
using namespace std;
class student{
    private:
      string name;
      int rollno;
      int prn;                                   
    public:
      void setstudent( string n, int r,int p)
      { name  = n;
        rollno = r;
        prn = p; 
      }
      void disply()
      {
          cout<<"Name:"<<name<<endl;
          cout<<"Rollno:"<<rollno<<endl;
          cout<<"Prn:"<<prn<<endl;
      }
};
int main()
{ 
student s;
s.setstudent ("asharani",50,202552);
s.disply();
return 0;
}




OUT PUT

Name:asharani
Rollno:50
Prn:202552


=== Code Execution Successful ===
