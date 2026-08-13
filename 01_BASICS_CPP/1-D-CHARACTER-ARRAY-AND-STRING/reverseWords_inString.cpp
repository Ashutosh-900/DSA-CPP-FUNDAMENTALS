#include <iostream>
#include <string>
using namespace std;
void reversewords (string & str,int s,int e){
    while(s<=e){
          swap(str[s++],str[e--]);
    }
    
}
int main () {
    string str;
   std::getline(cin,str);
    int s = 0 ;
   for(int j = 0 ; j<=str.length() ; j++){
    if(str[j] == ' ' || j==str.length()){
        reversewords(str,s,j-1);
        s = j+1; 
    }

   }
   cout<< str <<endl;
   return 0;
  
}
