// Write a program to count the number of even and odd elements in an array.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter no of element:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"number of even no:"<<even<<"\todd no:"<<odd;
    return 0;
}