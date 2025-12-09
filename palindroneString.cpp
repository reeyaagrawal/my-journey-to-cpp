#include <iostream>
#include<string>
using namespace std;
class check{
  char str[100];
  char str1[100];
  char *start,*end;
  char temp;
  public:
  void pal(){
      cout<<"enter string: ";
      cin.getline(str,100);
      start=str;
      end=str;
      int i;
     for( i=0;str[i]!='\0';i++){
         str1[i]=str[i];
     }
     str1[i]='\0';

while(*end!='\0'){
          end++;
      }
      end--;
      while(start<end){
            temp=*start;
          *start=*end;
          *end=temp;
          start++;
          end--;
      }
    //   cout<<str;
  bool ispalindrone=1;
  for(int i=0;str[i]!='\0';i++){
      if(str1[i]!=str[i]){
       ispalindrone=0;
       break;
     }
      
   
  }
  if(ispalindrone){
      cout<<str1<<" is palindrone";
  }else{
      cout<<str1<<" is not palindrone";
  }
  }
   
};
int main() {
   check s;
   s.pal();

    return 0;
}