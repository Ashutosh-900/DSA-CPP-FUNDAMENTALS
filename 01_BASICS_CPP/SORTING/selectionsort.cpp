#include <iostream>
#include <vector>
using namespace std;
void SelectionSort(vector<int>&arr,int n){
    for (int i=0 ; i<n-1 ; i++){
        int minIndex = i;
        for (int j= i+1 ; j<n ; j++){
            if(arr[j]< arr[minIndex]){
                minIndex = j;
            }
            
        }
        swap(arr[minIndex],arr[i]);

    }
}
int main () {
    vector<int>arr = {45,22,17,11,38};
    SelectionSort(arr,arr.size());
    cout<< "sorted array is :" ;
    for(int x : arr)
    {
        cout<< x << " ";
    } 
    return 0;
}
