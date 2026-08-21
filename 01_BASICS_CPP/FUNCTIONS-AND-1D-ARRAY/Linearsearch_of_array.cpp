#include <iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for (int i=0 ; i<size ;i++){
        if (arr[i]== key){
            return 1;
        }
    }
    return 0;
}
int main () {
    int arr[10]={2,12,-5,0,27,16,8,4,-11,7};
    int key;
    cout<< "enter the value of element you want to search :"<<endl;
    cin>>key;
    bool found = search(arr,10,key);
    if(found){
        cout<< "key is present"<<endl;

    }
    else{
        cout<< "key is absent"<<endl;
        
    }

}
