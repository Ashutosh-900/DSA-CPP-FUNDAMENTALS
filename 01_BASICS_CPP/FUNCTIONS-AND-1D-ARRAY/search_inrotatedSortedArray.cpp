#include <iostream>
#include <vector>
using namespace std;
int getPivot(vector<int>&arr,int n){
    int s=0;
    int e=n-1;
    int mid= s + (e-s)/2;
    while(s<e){
        if (arr[mid]>=arr[0]){
            s = mid+1;

        }
        else{
            e= mid;
        }
        mid= s +(e-s)/2;
    }
    return s;

}
int binarysearch(vector<int>&arr,int s,int e,int key){
    int start= s;
    int end = e;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]== key){
            return mid;
        }
        else if (key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
       mid = start + (end-start)/2;
    }
    return -1;
}
int getPosition(vector<int>&arr,int n,int key){
    int pivot=getPivot(arr,n);
    if(key>=arr[pivot]&& key<= arr[n-1]){
        return binarysearch(arr,pivot,n-1,key);

    }
    else{
        return binarysearch(arr,0,pivot-1,key);

    }
}
int main() {
    vector<int> arr = {7,8,2,3,4,5,6};
    cout<< getPosition(arr,7,8)<< endl;
    return 0;
}