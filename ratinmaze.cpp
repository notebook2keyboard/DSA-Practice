#include<iostream>
#include<vector>
using namespace std;

void ratinmaze(vector<vector<int>> &mat,int row,int col,string path,vector<string>&ans){
    int n = mat.size();
    if(row < 0 || col < 0|| col >= n || row >= n||mat[row][col]==0||mat[row][col]== -1){
        return;
    }

    if(row == n-1 && col == n-1){
        ans.push_back(path);
        return;
    }
    mat[row][col] = -1;


    ratinmaze(mat,row+1,col,path+"D",ans);//DOWN
    ratinmaze(mat,row-1,col,path+"U",ans);//UP
    ratinmaze(mat,row,col+1,path+"R",ans);//LEFT
    ratinmaze(mat,row,col-1,path+"L",ans);//RIGHT

    mat[row][col] = 1;
}



vector<string> findpath(vector<vector<int>> &mat){
    int n = mat.size();
    vector<string> ans;
    string path = "";
   

    ratinmaze(mat,0,0,path,ans);

    return ans;

}


int main() {

    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> ans = findpath(mat);

    for(string path : ans) {
        cout << path << endl;
    }

    return 0;
}

