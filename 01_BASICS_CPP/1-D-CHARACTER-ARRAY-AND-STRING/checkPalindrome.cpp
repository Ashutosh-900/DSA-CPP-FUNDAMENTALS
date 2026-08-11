#include <iostream>
#include <cstring>
using namespace std;
bool check(char ch[], int n){
        int s = 0;
        int e = n-1;
        while(s<=e){
            if(ch[s] != ch[e]){
                return 0;
            }
            else{
                s++;
                e--;
                
            }
            
        }
     return 1 ;
}
int main () {
    char ch[10];
    cin>> ch;
    int len = strlen(ch);
    cout<< "Palindrome or not :" <<check(ch,len)<<endl;

    
   
}