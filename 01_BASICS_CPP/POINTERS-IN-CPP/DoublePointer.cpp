#include <iostream>
using namespace std;
int main (){
    int i = 10;
    int *p = &i;
    int **p2 = &p;
    cout<<"printing p :"<< p <<endl;
    cout<<"address of p :"<< &p <<endl;
    cout<<*p2<<endl;
    // different ways to obtain value of i
    cout<< i <<endl;
    cout<< *p <<endl;
    cout<<**p2<<endl;
    // different ways to obtain address of p pointer
    cout<<&i<<endl;
    cout<< p<<endl;
    cout<<*p2<<endl;
    //different ways to obatin value stored in p2 pointer
    cout<< &p<<endl;
    cout<< p2<<endl;

}