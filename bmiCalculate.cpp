#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter weight: ";
    cin>>a;
    float b;
    cout<<"enter height: ";
    cin>>b;
    float bmi=a/(b*b);
   cout<<"BMI= "<<bmi;
    return 0;
}
