// Write a program to count the number of consonant in a string.
#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"input string:";
    cin.getline(str,100);
   int count=0;
   int len=0;
    int i=0;
    int j=0;
    while(str[j]!='\0'){
        len++;
        j++;
    }
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
       
       i++;
    }
    cout<<"no of consonant in given are: "<<len-count;
    return 0;
}