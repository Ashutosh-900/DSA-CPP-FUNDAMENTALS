#include <iostream>
using namespace std;
int largestsum(int arr [][4] ,int row ,int col){
    int maxi = INT_FAST16_MIN;
    int rowindex = -1;
    for(int row= 0 ; row<3 ; row++){
        int sum = 0;
        for(int col = 0 ; col<4 ; col++){
            sum += arr[row][col];

        }
        if(sum > maxi){
            maxi = sum;
            rowindex = row;
        }
    }
    cout<< "the maximum sum is : "<<maxi <<endl;
    return rowindex;
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
    int ansindex = largestsum(arr , 3 ,4);
    cout<< "max row is at index : "<< ansindex <<endl;
    return 0;
}
