#include <iostream>
#include <string>
using namespace std;
void removeduplicate(string & str){
    int s1 = 0;
    
    while(s1+1< str.length()){
        if(str[s1]==str[s1+1]){
            str.erase(s1,2);
            if(s1>0){
                s1--;
            }
        }
        else{
            s1++;
        }
    }
}
int main () {
    string str;
    cout<<"enter the string : "<<endl;
    cin>>str;
    removeduplicate(str);
    cout<<str <<endl;

}


