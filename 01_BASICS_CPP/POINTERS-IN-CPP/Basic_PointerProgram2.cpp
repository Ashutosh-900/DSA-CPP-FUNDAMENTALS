#include <iostream>
using namespace std;
int main () {
    // 1st way for initialisation of pointer
    int i = 6;
    int *q= &i;
    cout<< q <<endl;
    cout<< *q <<endl;
    // 2nd way for initialisation of pointer
    int *p = 0;
    p = &i;
    cout<< p <<endl;
    cout<< *p<<endl;
    int num = 5;
    int *m = &num;
    cout<< "before value : "<<*m<<endl;
    (*m)++;
    cout<<"after value : "<<*m<<endl;
    //copying a pointer
    int *n = p;
    cout<< p << "-"<< n<<endl;
    cout<< *p <<"-"<< *n<<endl;

}