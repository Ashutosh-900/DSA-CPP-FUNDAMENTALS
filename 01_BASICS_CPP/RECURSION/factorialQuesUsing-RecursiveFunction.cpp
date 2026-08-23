#include <iostream>
using namespace std;
int factorial(int n){
    if(n == 0)
    return 1;
    int smallerproblem = factorial(n-1);
    int biggerproblem = n*smallerproblem;
    return biggerproblem;
    //it can be done in short by return n*factorial(n-1) jaust after base case
}
int main () {
    int n;
    cout<<"enter the value of n you wan to find factorial of :"<<endl;
    cin>>n;
    int ans = factorial(n);
    cout<< ans <<endl;
    return 0;
}
