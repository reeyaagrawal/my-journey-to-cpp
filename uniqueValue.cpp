#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void uniqueValue(int arr[],int n){
    for(int i=0;i<n;i++){
    // bool isUnique=true;
    int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                // isUnique=false;
                count++;
                // break;
            }      
        }
        if (count==1)
            {
                cout<<arr[i]<<" ";
            }
    }
}
int main(){
    int arr[]={1,1,2,2,2,3,1};
    uniqueValue(arr,6);
    return 0;
}