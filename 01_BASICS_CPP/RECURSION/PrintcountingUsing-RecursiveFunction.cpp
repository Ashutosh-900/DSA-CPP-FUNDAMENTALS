#include <iostream>
using namespace std;
void print(int n){
    //base case
    if(n == 0){
    return ;
    }
    //recursive relation
    cout<< n <<endl;
    print(n-1);

}
int main () {
    int n;
    cout<<"enter the value of n you want to print :"<<endl;
    cin>>n;
    print(n);
    return 0;
    

}
