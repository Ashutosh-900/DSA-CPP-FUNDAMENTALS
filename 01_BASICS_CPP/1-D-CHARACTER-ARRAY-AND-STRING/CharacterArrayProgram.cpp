#include <iostream>
using namespace std;
int main () {
    char name[10];
    cout<< "Enter your name : "<<endl;
    cin>> name;
    cout<<"Your name is :" << name <<endl;
    name[4]='\0';
    cout<<"Your name is :" << name <<endl;
    return 0;

}


