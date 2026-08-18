#include <iostream>
using namespace std;
int main () {
    int temp[10]={1,2,3};
    cout<<"the size of array is :"<<sizeof(temp)<<endl;
    int *ptr = &temp[0];
    cout<<"the size of pointer is :"<<sizeof(ptr)<<endl;
    cout<<"the size is :"<<sizeof(*ptr)<<endl;
    cout<<"the size is :"<<sizeof(&ptr)<<endl;
    cout<<"the size is :"<<sizeof(*temp)<<endl;
    cout<<"the size is :"<<sizeof(&temp)<<endl;
    cout<<endl;
    int a[10]={5,10,15,20};
    cout<<"address of first memory block :"<< &a[0]<<endl;
    cout<<"address of first memory block :"<< &a<<endl;
    cout<<"print :"<< a<<endl;
    int *p = &a[0];
    cout<<"address stored in pointer :"<< p <<endl;
    cout<<" value at address stored in pointer :"<< *p <<endl;
    cout<<"address of pointer :"<< &p <<endl;
    return 0 ;
}
