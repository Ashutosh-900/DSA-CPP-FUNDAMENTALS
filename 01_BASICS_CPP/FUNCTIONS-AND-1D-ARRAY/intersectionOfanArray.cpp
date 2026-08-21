#include <iostream>
#include <vector>
using namespace std;
vector<int> findintersection(vector<int>&arr1 , int n , vector<int>&arr2 , int m){
    vector<int> ans;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;

        }
        else if (arr1[i]<arr2[j]){
            i++;

        }
        else{
             j++;

        }
    }
    return ans;

}
int main () {
    vector<int> arr1={1,2,3,4,5,6};
    vector<int> arr2={2,4,6,8};
    vector <int> ans= findintersection(arr1,6,arr2,4);
    for(int x : ans) cout<<x<<" ";
    cout<<endl;
}