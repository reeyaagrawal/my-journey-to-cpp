#include<iostream>
using namespace std;
int main(){
    int n,dig,count=0,sum=0;
    cout<<"enter number ";
    cin>>n;
    while(n>0){
        dig=n%10;
        n=n/10;
        count++;
        sum+=dig;
        cout<<dig<<" ";
    }
    cout<<"\nNumber of digits are: "<<count;
    cout<<"\nSum of digits are: "<<sum;
    return 0;
}