// #include<iostream>
// #include<vector>
// using namespace std;


// int partition(vector<int> &arr,int st,int end){
//     int idx = st-1,pivot = arr[end];
//     for(int j=st;j<end;j++){
//         if(arr[j]<= pivot){
//             idx++;
//             swap(arr[j],arr[idx]);
//         }
//     }
//     idx++;
//     swap(arr[end],arr[idx]);
//     return idx;
// }

// void quicksort(vector<int> &arr,int st,int end){
//     if(st < end){
//     int pividx = partition(arr,st,end);
//     quicksort(arr,st,pividx-1);
//     quicksort(arr,pividx+1,end);
//     }
// }

// int main(){
//     vector<int> arr = {5,2,6,4,1,3};

//     quicksort(arr,0,arr.size()-1);

//     for(int val : arr){
//         cout << val <<" ";
//     }
//     cout << endl;
// }


//count inversions


// #include<iostream>
// #include<vector>
// using namespace std;


// int inversions(int arr[],int size){
//     int count = 0;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(i<j && arr[i]>arr[j]){
//                 count++;
//             }
//         }
//     }
//    return count;
// }



// int main(){
//     int arr[]={6,3,5,2,7};
//     int size = 5;

//     cout << inversions(arr,size);
//     return 0;

    
 
// }


//optimal approch for count inversions

#include<iostream>
#include<vector>
using namespace std;


int merge(vector<int> &arr,int st,int mid,int end){
    vector<int> temp;
    int inversecount = 0;
    int i = st,j=mid+1;
    while(i <= mid && j<= end){
        if(arr[i]<= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
            inversecount += (mid-i+1);
        }
    }
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx=0;idx<temp.size();idx++){
        arr[idx+st] = temp[idx];
    }
    return inversecount;
}

int mergesort(vector<int> &arr,int st,int end){
    if(st >= end){
        return 0;
    }
        int mid = st+(end-st)/2;
       int inverseright =  mergesort(arr,st,mid);
       int inverseleft =  mergesort(arr,mid+1,end);
        int inversecount = merge(arr,st,mid,end);

        return inverseright+inverseleft+inversecount;
      
    }



int main(){
    vector<int> arr = {6,3,5,2,7};

   int ans =  mergesort(arr,0,arr.size()-1);
    cout << ans << endl;
    
}