#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"enter character:";
    cin>>n;
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U'){
        cout<<n<<" is a vowel";
    }else{
         cout<<n<<" is a consonant";
    }
    return 0;
}