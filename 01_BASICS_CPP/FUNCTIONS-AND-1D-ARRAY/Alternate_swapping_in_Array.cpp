#include <iostream>
using namespace std;
void swapAlternate(int arr[],int n){
     for(int i=0 ; i<n ; i+=2){
        if (i+1 < n){
            swap(arr[i],arr[i+1]);

        }
     }
}
void printarray(int arr[],int n){
    for(int i=0 ; i<n ; i++){
        cout<< arr[i]<< " ";

    }
    cout<<endl;

}
int main() {
    int even[6] = {1,3,5,7,8,-11};
    int odd[5] = {0,11,26,8,19};
    swapAlternate(even,6);
    swapAlternate(odd,5);
    printarray(even,6);
    cout<<endl;
    printarray(odd,5);
    

}