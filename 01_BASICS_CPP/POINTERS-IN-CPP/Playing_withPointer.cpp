#include <iostream>
using namespace std;
int main () {
    int arr[10]={2,4,6,8,10,14};
    cout<<"address of first memory block :"<< arr<<endl;
    cout<<"address of first memory block :"<< &arr[0]<<endl;
    cout<<"value at first memory block :"<< *arr<<endl;
    cout<<"value at :"<<*arr+1<<endl;
    cout<<"value at second memory block :"<<*(arr+1)<<endl;
    cout<<"value at :"<<*(arr)+1<<endl;
    cout<< "value at 2nd index is :"<<arr[2]<<endl;
    cout<<"value at third memory block :"<<*(arr+2)<<endl;
    int i =3;
    cout<<i[arr]<<endl;
    return 0;

}

