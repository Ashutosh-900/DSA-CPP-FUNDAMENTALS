#include <iostream>
using namespace std;
int armstrongnumber(int n){
    int count = 0;
    for(int i=1 ; i<=n ; i++){
        int temp = i;
        int sum = 0;
        while(temp!=0){
            int digit = temp%10;
            int cube = (digit*digit*digit);
            sum += cube;
            temp = temp/10;
           
        }
        if(i==sum){
            cout<< i << " ";
            count++;
        }
        
    }
    return count ;
}
int main () {
    int n ;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
   cout<< "\n Total count:" << armstrongnumber(n);
   
   return 0;
}