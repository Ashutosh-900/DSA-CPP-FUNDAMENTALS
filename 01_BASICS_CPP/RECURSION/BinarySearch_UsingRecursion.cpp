#include <iostream>
using namespace std;
void print(int arr[],int s, int e){
    for(int i = s ; i<=e ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarysearch(int arr[], int s ,int e , int k){
    print(arr,s,e);
    //basecase
    // element not found
    if(s>e){
        return false;
    }
    // element found 
    int mid = s+(e-s)/2;
    cout<<"array of mid is :"<< arr[mid] <<endl;
    if(arr[mid]== k){
        return true;
    }
    if(arr[mid]<k){
       return binarysearch(arr,mid+1,e,k);
    }
    else {
        return binarysearch(arr,s,mid-1,k);
    }

}
int main () {
    int arr[7] = {3,6,9,12,15,18,25};
    int size = 7;
    int k =25;
    cout<<"Present or not key :"<< binarysearch(arr,0,size-1,k)<<endl;
    return 0;
    
}
