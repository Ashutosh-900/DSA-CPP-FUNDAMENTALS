#include <iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int s=0;
    int e= size-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid]== key){
            return mid;

        }
        if(key>arr[mid]){
            s= mid+1;
        }
        else{
            e = mid-1;
        }
       mid= s +(e-s)/2;
    } 
 return -1;

}
int main () {
    int even[6]={2,4,8,6,10,18};
    int odd[5]={3,5,9,10,11};
    int evenindex = binarysearch(even,6,18);
    cout<< "index of 18 is :"<< evenindex<< endl;
    int oddindex = binarysearch(odd,5,9);
    cout<< "index of 9 is : "<< oddindex<< endl;
    return 0;
}