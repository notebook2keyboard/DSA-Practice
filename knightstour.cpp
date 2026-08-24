#include<iostream>
#include<vector>
using namespace std;


bool isvalid(vector<vector<int>> &grid,int row,int col,int n , int expval){
    if( row < 0 || col < 0 || row >= n || col >= n || grid[row][col] != expval){
        return false;
    }
    if(expval == n*n-1){
        return true;
    }
    int ans1 = isvalid(grid,row-2,col+1,n,expval+1);
    int ans2 = isvalid(grid,row-1,col+2,n,expval+1);
    int ans3 = isvalid(grid,row+1,col+2,n,expval+1);
    int ans4 = isvalid(grid,row+2,col+1,n,expval+1);
    int ans5 = isvalid(grid,row+2,col-1,n,expval+1);
    int ans6 = isvalid(grid,row+1,col-2,n,expval+1);
    int ans7 = isvalid(grid,row-1,col-2,n,expval+1);
    int ans8 = isvalid(grid,row-2,col-1,n,expval+1);

    return ans1|| ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
}






int main(){
    vector<vector<int>> grid={{0,3,6},{5,8,1},{2,7,4}};

    bool ans =  isvalid(grid,0,0 ,grid.size(),0);

    cout << ans << endl;

    return 0;
    
}