#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter year:";
    cin>>n;
    if(n%4==0){
        cout<<n<<" is a leap year";
    }else {
        cout<<n<<" is a not a leap year";
    }
    return 0;
}