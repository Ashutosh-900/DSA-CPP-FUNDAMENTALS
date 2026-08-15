#include <iostream>
using namespace std;
void printsum(int arr[][4] , int row ,int col){
    cout<< "printing the sum : "<<endl;
    for(int row = 0 ; row<3 ; row++){
        int sum = 0;
        for(int col = 0 ; col<4 ; col++){
            sum += arr[row][col];
        }
        cout<< sum << " ";
    }
    cout<<endl;
}
int main () {
    int arr [3][4];
    cout<< "enter the elements : "<<endl;
	for(int row = 0 ; row<3 ; row++){
		for(int col = 0 ; col<4 ; col++){
			cin>>arr[row][col];
		}
	}
	cout<<"printing the array : "<<endl;
	for(int row = 0 ; row<3 ; row++){
		for(int col = 0 ; col<4 ; col++){
			cout<<arr[row][col]<< " ";
		}
		cout<<endl;
	}
    printsum(arr,3,4);
    return 0 ;
}
