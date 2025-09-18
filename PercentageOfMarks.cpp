#include <iostream>
using namespace std;
int main(){
    float a,b,c,d,e;
    cout<<"enter marks of 5 subject:  ";
    cin>>a>>b>>c>>d>>e;
   int sum=a+b+c+d+e;
   int per=sum/5;
   cout<<"sum of marks= "<<sum;
   cout<<"\npercentage= "<<per<<"%";
    return 0;
}
