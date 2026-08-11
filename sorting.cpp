
// //bubble sort
// #include<iostream>
// using namespace std;


// void bubblesort(int arr[],int size){
//     for(int i=0;i<size-1;i++){
//         bool isswap = false;


//         for(int j=0;j<size-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                swap(arr[j],arr[j+1]);
//                isswap = true;
//         }
//     }
//     if(!isswap){
//         return;
//     }
// }
// }

// void printarray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout << arr[i]<<" ";
//         cout << endl;
//     }
// }

// int main(){
//     int arr[]={4,1,5,2,3};
//     int size = 5;

//     bubblesort(arr,size);
//     printarray(arr,size);

//     return 0;
// }



//selection sort
// #include<iostream>
// using namespace std;

// void selectionsort(int arr[],int size){
//     for(int i=0;i<size-1;i++){
//         int smallest_index = i;
//         for(int j=i+1;j<size;j++){
//             if(arr[j]<arr[smallest_index]){

//             smallest_index = j;
//         }
//     }
//     swap(arr[i],arr[smallest_index]);
// }
// }


// void printarray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout << arr[i] <<" ";
//         cout << endl;
//     }
// }


// int main(){
//     int arr[]={4,1,5,2,3};
//     int size = 5;

//     selectionsort(arr,size);
//     printarray(arr,size);
//     return 0;
// }


//insertion sort

#include<iostream>
using namespace std;

void insertionnsort(int arr[],int size){
    for(int i=1;i<size;i++){
        int curr = arr[i];
        int prev  = i-1;


        while(prev >= 0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
         arr[prev+1] = curr;
    }
   
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] <<" ";
        cout << endl;
    }
}

int main(){
    int arr[]={4,1,5,2,3};
    int size = 5;

    insertionnsort(arr,size);
    printarray(arr,size);
    return 0;
}


