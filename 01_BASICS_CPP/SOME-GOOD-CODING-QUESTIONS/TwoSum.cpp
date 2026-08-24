#include <iostream>
#include <vector>
using namespace std;
vector<int> twosum(vector<int>&nums ,int target){
    vector<int>ans;
    for(int i=0; i<nums.size() ; i++){
        for(int j=i+1 ; j<nums.size() ; j++){
          if(nums[i] + nums[j] == target){
          ans.push_back(i);
          ans.push_back(j);
          return ans;
          }
          
        }
    }
    return ans;
}
int main (){
    int target;
    cin>>target;
    vector<int> nums ={2,4,5,7,8,10};
   vector<int> element= twosum(nums,target);
   for(int i : element){
    cout<< i<< " ";
   }
   cout<<endl;
   return 0;


}