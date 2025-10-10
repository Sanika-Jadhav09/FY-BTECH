#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char option;
    int a;
    cout<<"enter option F or C";
    cin>>option;
    switch(option)
    {
        case 'F':
            cout<<"enter temp in farenhite"<<endl;
            cin>>a;
            cout<<(a*9/5)+32;
            break;
        case 'C':
            cout<<"enter temp in celsius"<<endl;
            cin>>a;
            cout<<5/9*(a-32);
    }
    return 0;
}



OUTPUT 1:
enter option F or CF
enter temp in farenhite
22 6
71

=== Code Execution Successful =



OUTPUT 2:
enter option F or CC
enter temp in celsius
150
0

=== Code Execution Successful ===
