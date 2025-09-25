#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter basic pay: ";
    cin>>a;
   float hra=0.1*a;
   float da=0.05*a;
   int sal=a+hra+da;
   cout<<"salary= "<<sal;
    return 0;
}
