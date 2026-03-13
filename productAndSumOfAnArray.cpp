#include<iostream>
#include<vector>
#include<climits>
#include<string>
#include <algorithm>
using namespace std;
void calculate(int arr[],int n){
    int sum=0;
    int product=1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        product*=arr[i];

    }
    cout<<"sum= "<<sum<<"\tproduct= "<<product;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    calculate(arr,6);
    return 0;
}
