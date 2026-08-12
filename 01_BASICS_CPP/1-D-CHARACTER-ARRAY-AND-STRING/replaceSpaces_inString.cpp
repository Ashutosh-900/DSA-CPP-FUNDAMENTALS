#include <iostream>
using namespace std;
string replace(string & str){
    string temp = " ";
    for(int i = 0 ; i<str.length() ; i++){
        if(str[i]== ' '){
            // or use temp+= "@900";
            temp.push_back('@');
            temp.push_back('9');
            temp.push_back('0');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;

}
int main () {
    string str ;
    cout<< "enter the string : "<<endl;
    getline(cin,str);
    cout<< " printing the string "<<endl;
    cout<< replace(str)<<endl;
   
   
}