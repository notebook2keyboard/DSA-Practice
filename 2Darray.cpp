//input and output of 2d arrays

// #include<iostream>
// using namespace std;

// int main(){
//     int matrix[4][3];
//     int rows = 4;
//     int colums = 3;

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<colums;j++){
//            cin >> matrix[i][j];
//         }
        
//     }

//        for(int i=0;i<rows;i++){
//         for(int j=0;j<colums;j++){
//            cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//linear search in 2d arrays

// #include<iostream>
// using namespace std;

// pair<int,int> linearsearch(int matrix[][3],int rows,int coloms,int key){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<coloms;j++){
//             if(matrix[i][j]==key){
//             return {i,j};
//         }
//     }
// }
// return {-1,-1};
// }

// int main(){
//     int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int rows = 4;
//     int coloms = 3;
//     int key = 8;

//     pair<int,int> ans = linearsearch(matrix,rows,coloms,key);
     
//     cout << ans.first << endl;
//     cout << ans.second << endl;
// }

//maxsum of rowsss

// #include<iostream>
// using namespace std;

// int getsum(int matrix[][3],int rows,int coloms){
//     int maxcolom = INT_MIN;
//     for(int j=0;j<coloms;j++){//it chooses the coloms
//         int colsum = 0;
//         for(int i=0;i<rows;i++){//it picks the elements in that coloms
//              colsum += matrix[i][j];
//         }
//         maxcolom = max(maxcolom,colsum);
//     }
//     return maxcolom;
// }

// int main(){
//     int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int rows = 3;
//     int coloms = 3;

//     cout << getsum(matrix,rows,coloms);
// }

//diagonal sum of the matrix

#include<iostream>
using namespace std;

int giagonalsum(int matrix[][4],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum += matrix[i][j];
            }else if(j==n-1-i){
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n =4;

    cout << giagonalsum(matrix,n);
    return 0;
}