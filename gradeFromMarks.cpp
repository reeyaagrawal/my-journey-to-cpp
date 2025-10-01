#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter marks:";
    cin>>n;
    if(n>=90&&n<=100){
        cout<<"GRADE A";
    }else if(n>=75&&n<=89) {
        cout<<"GRADE B";
    }else if(n>=60&&n<=74){
        cout<<"GRADE C";
    }else if(n>=0&&n<60){
        cout<<"fail";
    }else if(n<0&&n>100){
        cout<<"Enter valid marks";
    }
    return 0;
}