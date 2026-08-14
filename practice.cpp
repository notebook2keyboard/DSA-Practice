
//SINGLE ELEMENT IN THE ARRAY

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,4,1,2};
//     int size = 5;

//     int ans = 0;
//     for(int i=0;i<size;i++){
//         ans = i^ans;//its chcek for the single or unique elemets in ta array
//     }
//     cout << ans;
// }

//MAXIMUM SUBARRAY SUM

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={-2,1,-3,4,-1,2,1,-5,4};
//     int size = 9;

//     int max_sum = INT_MIN;
//     int current_sum = 0;
//     for(int i=0;i<size;i++){
//         current_sum += arr[i];

//         max_sum=max(current_sum,max_sum);

//         if(current_sum < 0){
//             current_sum = 0;
//         }
//     }
//     cout << max_sum;
// }

//exponential of the num

// #include<iostream>
// using namespace std;

// int main(){
//     double x = 2;
//     long long n = 5;

//     int ans = 1;

//     if (n<0){
//         x = 1/x;
//         n = -n;
//     }
//         while(n>0){
//             if(n % 2==1){
//                 ans *= x;
//             }
//               x *= x;
//         n /= 2;
//         }
       
// cout << ans << endl;
//     }

// #include<iostream>
// using namespace std;

// int main(){
//     double x = 2;
//     long long n = 5;//n is power
//     int ans = 1;

//     if(n<0){
//         x = 1/x;
//         n = -n;
//     }
//     while(n>0){
//         if(n % 2 == 1){
//             ans *= x;
//         }
//         x *= x;
//         n /= 2;
//     }
//     cout << ans << endl;
// }

//best time to buy and sell

// #include<iostream>
// using namespace std;

// int main(){
//     int prices[]={7, 1, 5, 3, 6, 4};
//     int size = 6;

//     int max_profit = 0;
//     int best_buy = prices[0];

//     for(int i=1;i<size;i++){
//         if( prices[i]> best_buy){
//             max_profit = max(max_profit,prices[i]-best_buy);
//         }
//         best_buy = min(best_buy,prices[i]);
//     }
//     cout << max_profit << endl;


// }

// container with most water

// #include<iostream>
// using namespace std;

// int main(){
//     int water[]={1,8,6,2,5,4,8,3,7};
//     int size = 9;
//     int max_water = 0;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             int width = water[j]-water[i];
//             int height = min(water[i],water[j]);
//             int area = width * height;
//             max_water = max(max_water,area);
//         }
        
//     }
//     cout << max_water << endl;
    
// }

//dutch national flag algorithm

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={2,0,2,1,1,0,1,2,0,0};
//     int size = 10;
//     int mid = 0;
//     int low = 0;
//     int high = size-1;
//     while(mid <= high){
//         if(arr[mid]==0){
//             swap(arr[mid],arr[low]);
//             mid++;
//             low++;
//         }
//         else if(arr[mid]==1){
//             mid++;
//         }
//           else{
//             swap(arr[high],arr[mid]);
//             high--;
//           }
//         }
//        for(int i=0;i<size;i++){
//         cout << arr[i];
//        }
//        cout << endl;

//         }


//revesre a string

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//   string name = "basavaraj";
//   int n = name.size();
//   int st =0 , end = n-1;
//   while(st <= end){
//     swap(name[st],name[end]);
//     st++;
//     end--;
//   }
// for(int i=0;i<n;i++){
//   cout << name[i];
// }
// cout << endl;
// }

//prime num

// #include<iostream>
// using namespace std;

// int main(){
//   int num = 1;
//   if (num <= 1){
//     cout <<"its not a prime";
//     return 0;
//   }
//   for(int i=2;i*i<num;i++){
//     if(num % i == 0){
//       cout << "its not a prime";
//       return 0;
//     }
   
//   }
//      cout << "its a prime";
//   return 0;
// }
    

//revrese a string

#include<iostream>
#include<string>
using namespace std;

int main(){
  string name = "the sky is blue";
  int n = name.size();
  string ans = "";


  reverse(name.begin(),name.end());

  for(int i=0;i<n;i++){
    string word = " ";
    while(i < n && name[i]!=' '){
      word += name[i];
      i++;
    }
    reverse(word.begin(),word.end());
    ans += " "+word;
  }
cout << ans;

}




