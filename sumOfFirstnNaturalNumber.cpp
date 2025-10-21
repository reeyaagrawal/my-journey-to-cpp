// Write a program to find the sum of the first n natural numbers.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
        
    }
    cout<<"sum of first "<<n<<" natural no is: "<<sum;
    return 0;
}