#include <iostream>
using namespace std;
void print(int arr[] , int n = 5 , int start=0){
    for(int i = start ; i<n ; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
int main() {
    int arr[10] ={2,4,6,8,10,12,14,16,18,20};
    int n = 10;
    print(arr,10);
    cout<<endl;
    print(arr,10,2);
    cout<<endl;
    print(arr);
    return 0 ;
}


