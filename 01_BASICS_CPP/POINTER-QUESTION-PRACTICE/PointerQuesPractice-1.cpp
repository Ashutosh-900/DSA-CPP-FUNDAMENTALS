#include <iostream>
using namespace std;
int main () {
    cout<<"first question"<<endl;
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout<<first<<endl;
    cout<<"second question"<<endl;
    int second = 8;
    int *m= &second;
    cout<<(*m)++<< " ";
    cout<< second<<endl;
    cout<<"third question"<<endl;
    float f = 12.5;
    float value = 21.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = value;
    cout<< *ptr<<" "<< f<< " "<<value<<endl;
    cout<<"fourth question"<<endl;
    char ch = 'a';
    char *po = &ch;
    ch++;
    cout<< *po <<endl;
    cout<<"fifth question"<<endl;
    int arr[] ={11,21,13,14};
    cout<<*(arr)<< " "<<*(arr+2)<<endl;
    return 0 ; 
} 