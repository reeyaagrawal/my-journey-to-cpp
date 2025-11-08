//  Write a program to find the least common multiple (LCM) of two numbers using a loop.
 #include<iostream>
 using namespace std;
 int main(){
int a,b;
    cout<<"enter two number: ";
    cin>>a>>b;
    int ori1=a;
    int ori2=b;
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    int gcd=a;
    int lcm=(ori1*ori2)/gcd;
    cout<<"lcm= "<<lcm;
    return 0;
 }