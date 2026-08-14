// #include<iostream>
// #include<vector>
// using namespace std;

// bool searchrow(vector<vector<int>> &matrix,int m,int n,int target,int row){
//     int st= 0;
//     int end =n-1;
//     while(st <= end){
//         int mid = st+(end-st)/2;
//         if(target==matrix[row][mid]){
//             return true;
//         }else if(target >=matrix[row][mid] ){
//             st = mid+1;
//         }else{
//             end = mid-1;
//         }
//     }
//     return false;
// }

//  bool  searchinarray(vector<vector<int>> matrix,int m,int n,int target){
//     int strow = 0,endrow=m-1;
//     while(strow <= endrow){
//         int midrow = strow+(endrow-strow)/2;
//         if(target >= matrix[midrow][0] && target <= matrix[midrow][n-1]){
//              return searchrow(matrix,m,n,target,midrow);

//         }else if(target > matrix[midrow][n-1]){
//             strow = midrow+1;
//         }
//         else{
//             endrow = midrow-1;
//         }
//     }
//     return false;
//  }



// int main(){
// vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
// int target = 16;
// int m = matrix.size();
// int n = matrix[0].size();

//    cout << searchinarray(matrix, m, n, target); 
   
// return 0;
// }


//search in a 2d array for a target in n*n matrix

#include<iostream>
#include<vector>
using namespace std;

bool searchinarray(vector<vector<int>> &matrix,int m,int n,int target){
    int row = 0,colom = n-1;
    while(row<m && colom >= 0){
        if(target == matrix[row][colom]){
            return true;
        }else if(target < matrix[row][colom]){
        colom--;
    }else{
        row++;
    }
    

}
return false;
}
int main(){
    vector<vector<int>> matrix = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int m = matrix.size();
    int n = matrix[0].size();
    int target = 5;

    cout << searchinarray(matrix,m,n,target);
    return 0;


}