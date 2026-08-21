#include <iostream>
#include <vector>
using namespace std;
int peakindex(vector<int>& arr){
    int s=0;
    int e=arr.size()-1;
    int mid= s + (e-s)/2;
    while(s<e){
        if (arr[mid]<arr[mid+1]){
            s = mid+1;

        }
        else{
            e = mid;

        }
        mid = s + (e-s)/2;

    }
    return s;
}
int main () {
    vector<int> arr={0,2,4,6,5,3,1};
    cout<< "Peak index = "<<peakindex(arr)<<endl;
   
    cout<< "Peak value = "<<arr[peakindex(arr)]<<endl;
    return 0;
}