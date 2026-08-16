#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralmatrix(vector<vector<int>>& matrix,int m,int n){
    int strow = 0;
    int endrow = m-1;
    int stcol = 0;
    int endcol = n-1;

    vector<int> ans;

    while(strow <= endrow && stcol <= endcol){
        for(int j=stcol;j<=endcol;j++){
            ans.push_back(matrix[strow][j]);
        }
        for(int i=strow+1;i<=endrow;i++){
            ans.push_back(matrix[i][endcol]);
        }
        for(int j=endcol-1;j>=stcol;j--){
            if(strow == endrow){
                break;
            }
            ans.push_back(matrix[endrow][j]);
        }
        for(int i=endrow-1;i>=strow;i--){
            if( stcol == endcol){
                break;
            }
            ans.push_back(matrix[i][stcol]);
        }
        strow++;endrow--;stcol++;endcol--;

    }
    return ans;
}


int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> ans = spiralmatrix(matrix,m,n);

    for (int x : ans){
        cout << x << endl;
    }

    
}