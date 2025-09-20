#include <iostream>
#include<cmath>
using namespace std;
int main(){
    float p,r,t;
    cout<<"enter two numbers: ";
    cin>>p>>r>>t;
   float ci=p*(pow((1+(r/100)),t)-1);
    float si=(p*r*t)/100;
   cout<<"SIMPLE INTEREST= "<<si;
   cout<<"\nCOMPOUND INTEREST= "<<ci;
    return 0;
}
