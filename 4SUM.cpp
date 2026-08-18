#include<iostream>
#include<vector>
using namespace std;


vector<vector<int>> sumof4(vector<int> &nums,int target){
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(),nums.end());

    for(int i=0;i<n;i++){
        if(i > 0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1;j<n;){
            int p = j+1,q=n-1;
            while(p<q){
                int sum = nums[i]+nums[j]+nums[p]+nums[q];
                if(sum > target){
                    q--;
                }
                else if (sum < target){
                    p++;

                }else{
                    ans.push_back({nums[i],nums[j],nums[p],nums[q]});

                    p++;
                    q--;

                    while(p < q && nums[p]==nums[p-1])p++;
                }
            }
            j++;
            while(j < n && nums[j]==nums[j-1]) j++;

        }
    }
    return ans;
}

int main(){
    vector<int>nums = {-2,-1,-1,1,1,2,2};
    int target = 0;

    vector<vector<int>> ans = sumof4(nums,target);

    for(auto quad : ans){
        for(int x: quad){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;


}