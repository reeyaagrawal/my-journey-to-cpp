#include <iostream>
#include<cmath>
using namespace std;
int main(){
    float p,r,t;
    cout<<"enter marks of 3 subject: ";
    cin>>p>>r>>t;
   
    float cgpa=(p+r+t)/3;
  
   cout<<"CGPA= "<<cgpa;
    return 0;
}
