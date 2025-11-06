#include<iostream>
using namespace std;
class student{
    private:
      int rollno;
      float marks;
      
     public:
      void sets(){
        cout<<"enter rollno and marks"<<endl;
        cin>>rollno>>marks;
      }
      void disply(){
          cout<<"rollno"<<rollno<<endl;
          cout<<"marks"<<marks<<endl;
      }
};
int main(){
    int n;
    cout<<"number of student"<<endl;
    cin>>n;
    student s[n];
    cout<<"enter student details"<<endl;
    for(int i=0; i<n; i++){
        s[i].sets();
    }
    for(int i=0; i<n; i++){
       s[i].disply();
}
return 0;
}


OUT PUT
number of student
2
enter student details
enter rollno and marks
2
30
