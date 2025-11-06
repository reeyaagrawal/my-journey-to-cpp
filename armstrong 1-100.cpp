// Write a program to print all Armstrong numbers between 1 and 500.
#include<iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=1;i<=500;i++){
        while(i==0){
            int dig=i%10;
            i=i/10;
            sum+=(dig*dig*dig);
        }
        if(sum==i){
        cout<<i;

        }
    }
    return 0;
}