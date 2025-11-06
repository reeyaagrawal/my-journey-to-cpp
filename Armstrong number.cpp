// rite a program to check whether a number is an Armstrong number (e.g., 153 = 1³+5³+3³).
#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"enter number: ";
    cin>>num;
    int ori=num;
    while(num>0){
        int dig=num%10;
        num=num/10;
        sum+=(dig*dig*dig);
    }
    if(sum==ori){
        cout<<ori<<" is an Armstrong number";
    }else{
        cout<<ori<<" is not an Armstrong number";
    }
    return 0;
}