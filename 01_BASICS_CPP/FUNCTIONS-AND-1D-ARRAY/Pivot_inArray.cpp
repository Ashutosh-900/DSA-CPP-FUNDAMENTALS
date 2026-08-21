#include <iostream>
using namespace std;
int getPivot(int arr[],int n){
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
int main () {
    int fun[6]={4,5,6,1,2,3};
   cout<<"Pivot is at index:"<< getPivot(fun,6)<< endl;
   cout<< "value of pivot is= "<< fun[getPivot(fun,6)]<< endl;
}
