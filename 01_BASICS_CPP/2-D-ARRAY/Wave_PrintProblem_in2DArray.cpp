#include <iostream>
#include <vector>
using namespace std;
vector<int> waveprint(vector<vector<int>> & matrix , int nrow,  int mcol){
    vector <int> ans;
    for(int col = 0 ; col< mcol ; col++){
        if(col&1){
            // odd col index
            for(int row = nrow -1 ; row>=0 ; row--){
                ans.push_back(matrix[row][col]);
            }
        }
        else{
            // 0 and even index col
            for(int row = 0 ; row < nrow ; row ++){
                ans.push_back(matrix[row][col]);
            }
        }
    }
    return ans;

}
int main () {
    int nrow ,mcol ;
    cout<< "enter the no of rows and cols : "<<endl;
    cin>>nrow>>mcol;
    vector<vector<int>> matrix(nrow ,vector <int> (mcol));
     cout<< "enter the elements : "<<endl;
    for(int row= 0 ; row<nrow ; row++ ){
        for(int col = 0 ;col<mcol ; col++){
            cin>> matrix[row][col];
        }
    }
   vector<int> final = waveprint(matrix ,nrow , mcol);
   cout<< "wave print sequence : "<<endl;
    for(int element : final){
        cout<< element << " ";
    }
    cout<< endl;
}