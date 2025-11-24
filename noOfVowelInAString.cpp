// Write a program to count the number of vowels in a string.
#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"input string:";
    cin.getline(str,100);
   int count=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
       
       i++;
    }
    cout<<"no of vowel in given are: "<<count;
    return 0;
}