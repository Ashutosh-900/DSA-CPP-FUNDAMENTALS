#include <iostream>
using namespace std;
char lowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
       char temp= ch - 'A' + 'a';
       return temp;
    }
    
}
char upperCase(char cs){
    if(cs>='A' && cs<='Z'){
    return cs;
    }
    else{
        char duplicate = cs -'a' +'A';
        return duplicate;

    }
}
int main () {
    char ch;
    char cs;
    cout<< "enter the character for 1 "<<endl;
    cin>>ch;
    cout<< "enter the character for 2 "<<endl;
    cin>>cs;

    cout<< "Character is :"<< lowerCase(ch) <<endl;
    cout<< "Character is :"<< upperCase(cs) <<endl;
    
   


}