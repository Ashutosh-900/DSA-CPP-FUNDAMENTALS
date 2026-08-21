#include <iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0 ; i<n ; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;

}
void sorting(int arr[],int n){
    int left=0;
    int right= n-1;
    while(left<right){
        if(arr[left]==0){
            left++;

        }
        else if(arr[right]==1){
            right--;

        }
        else if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;

        }
    }
}
int main () {
    int even[8]={1,1,0,0,0,0,1,0};
    sorting(even,8);
    printarray(even,8);
    return 0;

}