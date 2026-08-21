#include <iostream>
using namespace std;
void reverse(int arr[],int n){
     int start= 0;
     int end = n-1;
     while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;

     }
}
void printarray(int arr[], int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main () {
    int arr[6]= {2,8,-5,15,10,0};
    int DSA[7]= {1,0,9,-3,24,17,6};
    reverse(arr,6);
    reverse(DSA,7);
    printarray(arr,6);
    printarray(DSA,7);
    return 0;
}
