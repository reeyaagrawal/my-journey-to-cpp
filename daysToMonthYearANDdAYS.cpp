#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter no of days: ";
    cin>>a;
    int yr=a/ 365;
    int rd=a-(yr*365);
    int month=rd/12;
    int day=rd%12;
    cout<<"given no of days has "<<yr<<" years and "<<month<<" months and "<<day<<" days.";
    return 0;
}
