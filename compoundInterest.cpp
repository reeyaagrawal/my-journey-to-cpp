#include <iostream>
#include<cmath>
using namespace std;
int main(){
    float p,r,t;
    cout<<"enter two numbers: ";
    cin>>p>>r>>t;
   float ci=p*(pow((1+(r/100)),t)-1);
   cout<<"COMPOUND INTEREST= "<<ci;
    return 0;
}
