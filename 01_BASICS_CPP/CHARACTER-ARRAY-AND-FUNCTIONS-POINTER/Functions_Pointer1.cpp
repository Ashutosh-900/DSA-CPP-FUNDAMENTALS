#include <iostream>
using namespace std;
int getsum(int arr[],int n){
    cout<<endl<<"size :"<<sizeof(arr)<<endl;
    int sum = 0;
    for(int i = 0 ; i<n ; i++){
        sum += arr[i];
    }
    return sum;
}
int main () {
    int arr[5]= {5,10,15,20,25};
    cout<<"sum is :"<< getsum(arr,5)<<endl;
    // part of array
    cout<<"sum is :"<< getsum(arr+2,3)<<endl;
    return 0;
}
