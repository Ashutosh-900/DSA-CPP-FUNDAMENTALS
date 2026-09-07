#include <iostream>
#include <vector>
using namespace std;
bool issafe(int x, int y, int n ,vector<vector<int>> &visited ,vector<vector<int>> &m ){
    if((x>=0 && x<n) && (y>=0 && y<n) && (m[x][y] == 1 && visited[x][y]== 0)){
        return true;
    }
    return false;
}
void solve(vector<vector<int>> &m ,int n , int x,  int y,string path , vector<string> &ans, vector<vector<int>> &visited ){
    //base case
    
    if(x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;
    // 4 choices --> D/L/R/U
    //for down
    int newx = x+1;
    int newy = y;
    if(issafe(newx,newy,n,visited,m)){
        path.push_back('D');
        solve(m,n,newx,newy,path,ans,visited);
        //backtracking
        path.pop_back();
    }
    //  for left
     newx = x;
     newy = y-1;
    if(issafe(newx,newy,n,visited,m)){
        path.push_back('L');
        solve(m,n,newx,newy,path,ans,visited);
        //backtracking
        path.pop_back();   
    }
    // for right
     newx = x;
     newy = y+1;

     if(issafe(newx,newy,n,visited,m)){
        path.push_back('R');
        solve(m,n,newx,newy,path,ans,visited);
        //backtracking
        path.pop_back();
  
    }
    // for upper
     newx = x-1;
     newy = y;
     if(issafe(newx,newy,n,visited,m)){
        path.push_back('U');
        solve(m,n,newx,newy,path,ans,visited);
        //backtracking
        path.pop_back();   
    }
    visited[x][y] =0;

}
vector<string> findpath(vector<vector<int>> &m , int n){
    vector <string> ans;
    string path = "";
    vector<vector<int>> visited = m;
    for(int i = 0 ; i<n ;i++){
        for(int j = 0; j<n ; j++){
            visited[i][j] =0;
        }
    }
    int srcx = 0;
    int srcy = 0;
    if(m[0][0]== 0){
        return ans;
    }
    solve(m,n,srcx,srcy,path,ans,visited);
    return ans;
}
int main () {
    vector<vector<int>> m = {
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };
     int n =m.size();
     vector<string> finalans = findpath(m,n);
     if(finalans.empty()){
        cout<< "-1"<<endl;

     }
     else{
        for(const string & finalpath : finalans){
            cout<< finalpath<< " ";
        }
        cout<<endl;
     }
     return 0;
}