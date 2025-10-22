//Write a program to find the sum of all odd numbers between 1 and 100.
#include<iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=1;i<=100;i++){
        if(i%2!=0){
        sum+=i;
        }
    }
    cout<<"sum of all even number b/w 1 and 100= "<<sum;
    return 0;
}