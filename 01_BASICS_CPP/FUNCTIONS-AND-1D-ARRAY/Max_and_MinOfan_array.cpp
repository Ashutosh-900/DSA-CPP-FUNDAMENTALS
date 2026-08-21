#include <iostream>
using namespace std;
int getMax(int num[],int n){
    int maxi = INT16_MIN;
    for(int i=0 ; i<n ; i++){
        maxi = max(maxi,num[i]);
    }
    return maxi;
}
int getMin(int num[], int n){
    int mini = INT16_MAX;
    for (int i=0 ; i<n ; i++){
        mini = min(mini,num[i]);
    }
    return mini;
}
int main () {
    int size;
    cin>> size;
    int num[100];
    for (int i=0 ; i<size ;i++){
        cin>> num[i];
    }
    cout<< "maximum value:"<< getMax(num,size)<<endl;
    cout<< "minimum value :"<< getMin(num,size)<<endl;

}
