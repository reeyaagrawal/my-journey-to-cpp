// . Write a program to print a square pattern of numbers (5 × 5)
#include <iostream>
using namespace std;
int main() {
  for(int i=1;i<=5;i++){
      for(int j=1;j<=5;j++){
          cout<<j<<" ";
       }
      cout<<endl;
  }
    return 0;
}