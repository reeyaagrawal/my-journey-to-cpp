// Write a program to check whether a number is a perfect number (e.g., 28 = 1+2+4+7+14)
#include<iostream>
using namespace std;
int main(){
    int n ,sum=0;
    cout<<"enter number: ";
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<n<<" is a perfect number";
    }else{
        cout<<n<<" is not a perfect number";

    }
 return 0;
}