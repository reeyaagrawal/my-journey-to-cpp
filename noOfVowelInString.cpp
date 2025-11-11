// Write a program to count the number of vowels in a string.

#include <iostream>
#include<string>
using namespace std;
int main() {
    string str;
    cout<<"enter string:";
    getline(cin,str);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'){
            count++;
        }
    }
cout<<"no of vowel in string are: "<<count;
    return 0;
}