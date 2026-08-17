//brute force approch

// #include<iostream>
// using namespace std;

// vector<int> sumof2(vector<int>& nums,int n,int target){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(nums[i]+nums[j]==target){
//             return {i,j};
//             }
//         }
//     }
//     return{};
// }

// int main(){
//     vector<int> nums = {5,2,11,7,15};
//     int n = nums.size();
//     int target = 9;

//     vector<int> ans = sumof2(nums,n,target);

//     cout << ans[0]<<" "<< ans[1];

  
// }


//better approch

// #include<iostream>
// #include<vector>
// using namespace std;


// vector<int> sumof2(vector<int> &nums,int n,int target){

//     sort(nums.begin(),nums.end());//its a 2 pointer apporch its works only on soretd array
//     int st=0, end=n-1;

//     while(st <= end){
//         if(nums[st]+nums[end]==target){
//         return {st,end};
//         }
//         else if(nums[st]+nums[end]>target){
//             end--;
//         }
//         else{
//             st++;
//         }
//     }
//     return {};


// }




// int main(){
//      vector<int> nums = {5,2,11,7,15};
//     int n = nums.size();
//     int target = 9;

//     vector<int> ans = sumof2(nums,n,target);

//     cout << ans[0]<<" "<< ans[1];

// }


// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> sumof2(vector<int> &nums,int n ,int target){
//     unordered_map<int,int> mp;//its a unodered map

//     for(int i=0;i<n;i++){
        
//         int need = target - nums[i];

//         if(mp.find(need)!= mp.end()){
//             return {mp[need],i};
//         }
//        mp[ nums[i]]=i;
//     }
//     return {};
// }



// int main(){
//     vector<int> nums = {5,2,11,7,15};
//     int n = nums.size();
//     int target = 9;

//     vector<int> ans = sumof2(nums,n,target);

//     cout << ans[0]<<" "<< ans[1];
// }



//find missing and repeating numbers in an array

// #include<iostream>
// #include<vector>
// #include<unordered_set>
// using namespace std;

// vector<int> repeatingandmissing(vector<vector<int>>& grid,int n){
//     vector<int> ans;
//     int a,b;
//     unordered_set<int> s;
//     int actualsum = 0;
  

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
        
//             actualsum += grid[i][j];
//             if(s.find(grid[i][j])!= s.end()){
//                 a=grid[i][j];
//                 ans.push_back(a);
//             }
//             s.insert(grid[i][j]);
//         }
//     }
//     int expecetdsum = (n * n) * (n * n + 1)/2;
//     b=expecetdsum+a-actualsum;
//     ans.push_back(b);
//     return ans;
// }


// int main(){
//     vector<vector<int> >grid = {{9,1,7},{8,9,2},{3,4,6}};
//     int n = grid.size();

//     vector<int> ans= repeatingandmissing (grid,n);

//     cout << ans[0]<< " " << ans[1];


// }


//find duplicates


#include<iostream>
#include<unordered_set>
using namespace std;


int findduplicates(int arr[],int size){
    unordered_set<int> s;

    for(int i=0;i<size;i++){
        if(s.find(arr[i])!= s.end()){
        return arr[i];
    }
    s.insert(arr[i]);

    }
    return -1;
}


int main(){
    int arr[]={3,1,3,4,2};
    int size = 5;

    int ans = findduplicates(arr,size);

    cout << ans  << endl;

}