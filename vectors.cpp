// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector <string> vec = {"muttu", "kittu", "pattu", "lattu"};
//     vec.push_back("gattu");
//     vec.front() = "sittu";
//     for (string i:vec){
//         cout << i << endl;
//         // cout << "size of vector is: " << vec.size() << endl;
// }
// cout << "size of vector is: " << vec.size() << endl;
// }

// #include<iostream>
// using namespace std;

// // int unique_num(int arr[],int size,int ans){
// //     for (int i=0;i<size;i++){
// //         ans = ans^arr[i];
// //     }
// //     return ans;
// // }

// // int main(){
// //     int ans = 1;
// //     int arr[] = {2,3,4,5,6,7,8,8,7,5,6,4,67};
// //     int size = 13;
// //     // int ans = 1;
// //     cout << unique_num(arr,size,ans) << endl; 
// //     return 0;  
// // }


// // #include<iostream>
// // #include<vector>
// // using namespace std;

// // vector <int> pairsum(int arr[],int size,int target){
// //     vector <int> ans;
// // //     int n = nums.size() = 0;
// //     for (int i=0;i<size;i++){
// //         for (int j=i+1;j<size;j++){
// //             if (arr[i]+arr[j] == target){
// //                 ans.push_back(i);
// //                 ans.push_back(j);
// //             }
// //         }
// //     }

// //     return ans;
// // }
// // int main(){
// //     int arr[] = {2,7,11,15};
// //     int size = 4;
// //     int target = 9;
// //     vector <int> ans = pairsum(arr,size,target);
// //     for (int i=0;i<ans.size();i++){
// //         cout << ans[i] << " ";
// //     }
// //     return 0;
// // }

// // // #include<iostream>
// // // #include<vector>
// // // using namespace std;

// // // int main(){
// // //     cout << "hello world " << endl;
// // //     return 0;
// // // }


// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int arr[]={2,7,11,15};
// //     int size =4;
// //     int target =26;
// //     int i=0;
// //     int j=size-1;
// //     int pair_sum=0

// //     while (i<j){
// //         pair_sum=arr[i]+arr[j];
// //         if (pair_sum == target){
// //             cout << "pair found at index: " << i << " and " << j << endl;
// //             break;
// //         }
// //         if (arr[i]< arr[j]){
// //             i++;
// // }
// //         else
// //             j--;
// //         }
// //     }
// // }
// // }


// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int arr[] = {34,56,45,21,67,89,90};
// //     int size = 7;
// //     int target = 45;
// //     for (int i=0;i<size;i++){
// //         if(arr[i] == target){
// //             // cout << "target found at index: " << i << endl;
// //             // break;
// //             return i;

// //         }
        
// //     }
// //     return -1; // Return -1 if target is not found
// // }

// // #include<iostream>
// // #include<vector>
// // using namespace std;

// // vector <int> majorityelement(vector <int> nums){
// //     vector <int> ans;
// //     int n = nums.size();
// //     for (int i=0;i<n;i++){
// //         int count = 0;
// //         for (int j=0;j<n;j++){
// //             if (nums[i] == nums[j]){
// //                 count++;
// //             }
// //         }
// //         if (count > n/2){
// //             ans.push_back(nums[i]);
// //         }
// //     }
// //     return ans;
// // }
// //  int main(){
// //     vector <int> nums = {3,2,3};
// //     vector <int> ans = majorityelement(nums);
// //     for (int i=0;i<ans.size();i++){
// //         cout << ans[i] << " ";
// //     }
// //     return 0;
// // }

// //mores voting algorithm
// #include<iostream>
// using namespace std;

// // int main(){
// //     int array[] = {1,2,3,2,1,4,};
// //     int size = 6;
// //     int ans =0;
// //     int freq =0;
// //     for (int i=0;i<size;i++){
// //         if (freq==0){
// //             ans = array[i];
// //         }
// //         if (array[i]==ans){
// //             freq++;

// //         }else{
// //             freq--;
// //         }
        
// //     }
// //      cout << "majority element is: " << ans << endl;
// // }


// #include<iostream>
// using namespace std;


// // int main(){
// //     int prices[] = {7,1,5,3,6,4};
// //     int size = 6;
// //     int maxpofit =0;
// //     int bestbuy = prices[0];
// //     for (int i=1;i<size;i++){
// //         if (prices[i]>bestbuy){
// //             maxpofit = max(maxpofit,prices[i]-bestbuy);
// //         }else{
// //             bestbuy = min(bestbuy,prices[i]);
// //         }
// //     }
// //     cout << "Maximum profit: " << maxpofit << endl;
// //     }


// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int array[] = {2,3,4,5,6};
// //     int size = 5;
// //     int reverse[size];
// //     for (int i=0;i<size;i++){
// //         for(int j=size-1;j>i;j--){
// //             if(array[i]<array[j]){
// //                 swap(array[i],array[j]);
// //             }
// //             else if(array[i]==array[j]){
// //                 continue;
// //             }
// //             else{
// //                 break;
// //             }
// //         cout << array[i] << " ";
// //         }
// //     }
// // }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> nums = {1, 2, 3, 4};
//     int n = nums.size();

//     vector<int> left(n), right(n), ans(n);

//     // Left Product
//     left[0] = 1;
//     for(int i = 1; i < n; i++) {
//         left[i] = left[i - 1] * nums[i - 1];
//     }

//     // Right Product
//     right[n - 1] = 1;
//     for(int i = n - 2; i >= 0; i--) {
//         right[i] = right[i + 1] * nums[i + 1];
//     }

//     // Final Answer
//     for(int i = 0; i < n; i++) {
//         ans[i] = left[i] * right[i];
//     }

//     // Print
//     for(int x : ans)
//         cout << x << " ";

//     return 0;
// }


// maximum subarray sum

// #include<iostream>
// using namespace std;

// int main(){
//     int array[] = {3,-4,5,4,-1,7,8};
//     int size = 7;
//     int max_sum = INT_MIN;
//     for(int st=0;st<size;st++){
//         int current_sum = 0;
//         for(int end=st;end<size;end++)
//         current_sum += array[end];
//         max_sum=max(max_sum,current_sum);

//     }
//     cout << "the maximum sum of subarray is" << max_sum << endl;
//     return 0;
// }

// maximum pair sum

// #include<iostream>
// using namespace std;

// int main(){
//     int array[]={2,7,11,15};
//     int size = 4;
//     int target = 9;
//     int pairsum = 0;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(array[i]+array[j]==target){
//                 pairsum = array[i],array[j];
//                 cout << array[i] << endl; 
//                 cout << array[j] << endl;
//             }
//         }
//     }

// }