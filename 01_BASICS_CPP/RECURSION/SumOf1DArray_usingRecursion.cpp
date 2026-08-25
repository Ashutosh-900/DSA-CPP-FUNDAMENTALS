#include <iostream>
using namespace std;
int getsum(int *arr , int size){
    //base case 
    if(size == 0){
        return 0;
    }
    if(size == 0){
        return arr[0];
    }
    // recursive call
    int remainingpart = getsum(arr+1 , size-1);
    int sum = arr[0]+remainingpart;
    return sum;
}
int main (){
    int arr[5]= {3,2,5,16,6};
    int size = 5;
    int ans = getsum(arr , size);
    cout<<"The sum of the given array is :"<< ans <<endl;
    return 0;
}
