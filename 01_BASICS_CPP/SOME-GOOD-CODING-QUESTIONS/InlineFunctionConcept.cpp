#include <iostream>
using namespace std;
inline int getmax(int &a , int&b){
    return (a>b) ? a:b ;
}
int main () {
    int a = 5, b=3 ;
    int ans = 0;
    ans =  getmax(a,b);
    cout<< ans <<endl;
    a+=3;
    b+=4;
    ans= getmax(a,b);
    cout<< ans <<endl;
    return 0;
    
    
}

