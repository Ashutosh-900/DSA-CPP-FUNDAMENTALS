#include <iostream>
using namespace std;
int lastocc(int arr[],int size,int key){
    int s= 0;
    int e= size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
           s = mid+1;

        }
        else if(key>arr[mid]){
            s = mid+1;

        }
        else if (arr[mid]>key){
            e= mid-1;

        }
        mid = s +(e-s)/2;
    }
    return ans;

}
int main (){
    int DSA[7]={1,2,3,3,3,3,5};
    cout<<"last occurence of 3 is at index"<<lastocc(DSA,7,3)<< endl;
    return 0;
    
}


