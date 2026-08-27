#include <iostream>
using namespace std;
bool check(string &str , int s, int e){
    //base case
    if(s>e)
    return true;
    if(str[s] != str[e]){
        return false;
    }
    else{
        s++;
        e--;
        return check(str,s,e);
    }
}
int main (){
    string name = "abcde";
    cout<<endl;
    bool ans = check(name,0,name.length()-1);
    if(ans){
        cout<<"Its a Palindrome"<<endl<<endl;
    }
    else{
        cout<<"Its not a Palindrome"<<endl<<endl;
    }
}