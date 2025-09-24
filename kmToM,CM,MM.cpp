#include <iostream>
using namespace std;
int main(){
    float t;
    cout<<"enter distance in km: ";
    cin>>t;
   int inm=t*1000;
   int incm=inm*100;
   int inmm=incm*10;
   cout<<"distance in meter= "<<inm<<"m";
   cout<<"\ndistance in centimeter= "<<incm<<"cm";
   cout<<"\ndistance in millimeter= "<<inmm<<"mm";
    return 0;
}
