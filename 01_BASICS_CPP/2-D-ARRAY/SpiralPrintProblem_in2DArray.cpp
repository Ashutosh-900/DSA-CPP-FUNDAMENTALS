#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralprint(vector<vector<int>> & matrix ){
    vector <int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int count = 0 ;
    int total = row * col;
    //index initialisation
    int startingrow = 0;
    int endingcol = col-1;
    int endingrow = row -1;
    int startingcol = 0;
    while(count<total){
    //print starting row
    for(int index = startingcol ; count<total && index<=endingcol ; index++){
        ans.push_back(matrix[startingrow][index]);
        count++;
    }
    startingrow++;
    //print endingcol
    for(int index =startingrow ;count<total && index <=endingrow ; index++){
        ans.push_back(matrix[index][endingcol]);
        count++;
    }
    endingcol--;
    //print endingrow
    for(int index = endingcol ;count<total && index>=startingcol ; index--){
        ans.push_back(matrix[endingrow][index]);
        count++;
    }
    endingrow--;
    //print starting col
    for(int index = endingrow ;count<total && index>=startingrow ; index--){
        ans.push_back(matrix[index][startingcol]);
        count++;
    }
    startingcol++;
  }
  return ans;

}
int main () {
    int row,col ;
    cout<< "enter the number of rows and cols :"<<endl;
    cin>>row>>col;
    vector<vector<int>> matrix(row , vector<int>(col));
   cout<< "enter the elements : "<<endl;
    for(int i= 0 ; i<row ; i++){
        for(int j = 0 ;j<col ; j++){
            cin>> matrix[i][j];
        }
    }
    vector <int> finalans = spiralprint(matrix);
    cout<< "printing the spiral sequence : "<<endl;
    for(int element : finalans){
        cout<< element << " ";
    }
    cout<<endl;
}
