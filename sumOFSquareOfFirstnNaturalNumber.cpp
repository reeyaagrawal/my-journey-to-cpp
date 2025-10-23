// Write a program to calculate the sum of squares of the first n natural numbers.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
       sum+=i*i;
        }
  cout<<"sum of squares of the first "<< n<<" natural numbers:"<<sum;
    return 0;
}