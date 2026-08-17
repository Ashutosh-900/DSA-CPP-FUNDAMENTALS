#include <iostream>
using namespace std;
int main (){
    int num = 5;
    cout<< num <<endl;
    cout<<"address of num is : "<< &num<<endl;
    // making int pointer to store address of num
    int *ptr = &num;
    cout<<"address is : "<<ptr<<endl;
    cout<<"value at address is : "<<*ptr<<endl;
    //making double pointer to store address of d
    double d= 4.3;
    double *p2 = &d;
    cout<<"address is : "<<p2<<endl;
    cout<<"value at address is : "<<*p2<<endl;
    cout<<"size of integer is : "<< sizeof(num)<<endl;
    cout<<"size of pointer is : "<< sizeof(ptr)<<endl;
    // null pointer is created
    int *p = 0;
    cout<< *p<<endl;
    return 0;
}
