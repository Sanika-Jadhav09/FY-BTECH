#include<iostream>
using namespace std;
void swaap(int a,int b){
    int t=a;
    a=b;
    b=t;
    cout<<"a after swap:"<<a<<endl;
    cout<<"b after swap:"<<b<<endl;
}
int main(){
    int a,b;
    cout<<"enter a and b:"<<endl;
    cin>>a>>b;
    cout<<"a before  swap"<<a<<endl;
    cout<<"b before swap"<<b<<endl;
    swap(a,b);
    return 0;
}



OUT PUT 
2
4
 a before swap 2
b before swap 4
a after swap 4
b after swap 2
