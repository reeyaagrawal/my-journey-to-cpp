// Write a program to merge two arrays into a third array.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements of an array:";
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int oddSum=0;
    int evenSum=0;
    for(int i=0;i<n;i++){
       if(arr[i]%2==0) {
           evenSum+=arr[i];
       }else{ 
       oddSum+=arr[i];
       }
    }
    cout<<"sum of even elements:"<<evenSum<<endl;
    cout<<"sum of odd elements:"<<oddSum<<endl;
    return 0;
}