// linear search on a matrix
#include <iostream>
using namespace std;
bool linearSearch(int mat[][4],int r,int c,int target){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(mat[i][j]==target){
                return true;
                break;
            }
        }
    }
    return false;
}
int main(){
    int matrix[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout<<linearSearch(matrix,3,4,18);
    return 0;
}