#include <iostream>
using namespace std;
int main() {
    int row,col;
    cout<<"enter the number of rows and columns : "<<endl;
    cin>>row>>col;
    int ** arr  = new int*[row];
    for(int i=0 ; i<row ;i++ ){
        arr[i]=new int[col];
      
    }
      //creation done
      //taking input
      for(int i = 0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cin>>arr[i][j];
        }
      }
      //printing 2D array
      for(int i = 0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cout<<arr[i][j];
        }
      }
      //releasing memory
      for(int i = 0 ;i<row ;i++){
        delete[]arr[i];
      }
      delete []arr;
}

