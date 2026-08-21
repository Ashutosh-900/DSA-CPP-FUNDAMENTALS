#include <iostream>
using namespace std;
void printarray(int arr[],int size){
    cout<< "printing an array"<<endl;
    for(int i=0 ;i< size; i++){
        cout<< arr[i]<<" ";

    }
    cout<< "printing done"<<endl;
}
int main() {
    int first[15]={2,7,8,-5,12};
    int n= 15;
    printarray(first,15);
    int second[10] = {0};
     n =10;
    printarray(second ,10);
    int third[10] = {1};
     n= 10;
    printarray(third ,10);
    int thirdsize= sizeof(third)/sizeof(int);
    cout<< "size of third is :"<< thirdsize<<endl;
}
