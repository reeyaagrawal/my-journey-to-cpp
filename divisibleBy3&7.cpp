#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no:";
    cin>>n;
    if(n%3==0&&n%7==0){
        cout<<n<<" is divisible by both 3 and 7";
    }else{
         cout<<n<<" is not divisible by both 3 and 7";
    }
    return 0;
}