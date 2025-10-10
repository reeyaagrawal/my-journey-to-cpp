#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"enter character:";
    cin>>n;
    if(n>='a'&&n<='z'){
        cout<<n<<" is a lowercase";
    }else if(n>='A'&&n<='Z'){
         cout<<n<<" is a uppercase";
    }else if(n>='0'&&n<='9'){
        cout<<n<<" is a digit";
    }else{
        cout<<n<<" is a special character";
    }
    return 0;
}