#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// to find pair sum

//brute force
void  pairSum(int arr[],int n,int target){
    int ans[2]={-1,-1};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                ans[0]=i;
                ans[1]=j;
                break;
            }
        }
    }
    if(ans[0]==-1){
        cout<<"Pair not found!";
    }else{
        cout<<ans[0]<<"\t"<<ans[1];
    }
}


// optimized

void pairSumOp(int arr[],int n,int target){

    int i=0;
    int j=n-1;
    int ans[2]={-1,-1};
    while(i<j){
        if(arr[i]+arr[j]>target){
            j--;
        }else if(arr[i]+arr[j]<target){
            i++;
        }else if(arr[i]+arr[j]==target){
            ans[0]=i;
            ans[1]=j;
            break;
        }
    }
    if(ans[0]==-1){
        cout<<"Pair not found!";
    }else{
        cout<<ans[0]<<"\t"<<ans[1];
    }
    
}

// to find majority element
//brute force

void majorityBrute(int arr[],int n){
    for(int i=0;i<n;i++){
        int freq=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                freq++;
            }
        }
        if(freq>n/2){
            cout<<"majorty element is: "<<arr[i];
            break;
        }
    }
    
}

// optimized
void majorityOp(int arr[],int n){
    // sort(arr,arr+n);
    for(int i=1;i<n;i++){
        int freq=1;
        if(arr[i]==arr[i-1]){
            freq++;
        }else{
            freq--;
        }
        if(freq>n/2){
         cout<<"majorty element is: "<<arr[i];
            return;   
        }
    }
}



// mooorve's approach

void majority(int arr[],int n){
    int freq=0;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(freq==0){
        ans=arr[i];
        }else if(ans==arr[i]){
            freq++;
        }else{
            freq--;
        }
    }
    
   cout<<"Majority element is: "<<ans; 
}


int main(){
    // int arr[]={1,2,3,4,5,6};
    // cout<<pairSum(arr,n,12);
    // pairSumOp(arr,n,6);
    int arr[]={1,1,1,2,3,1,2,2,1,1,1,1};
    int n=sizeof(arr)/sizeof(int);
 majorityOp( arr,n);

    return 0;
}

