// #include<iostream>
// using namespace std;


// void printnums(int n){


//     if(n ==1){
//         cout << "1\n";
//         return ;
//     }
//     cout << n << " ";

//     printnums(n-1);
// }


// int main(){
//     int n = 4;

//     printnums(n);


// }



// #include<iostream>
// using namespace std;


// int main(){
//     int n = 4;
//     int fact = 1;


//     for(int i=1;i<=n;i++){
//         fact *= i;


//     }

//     cout << fact<< endl;
   

// }


//fcatorial using recursion

// #include<iostream>
// using namespace std;

// int factorial(int n){
   


//     if(n==0){
//         return 1;
//     }
//     return n*factorial(n-1);
// }

// int main(){
//     int n = 4;
//     cout <<factorial(n);
// }

//sum of n

#include<iostream>
using namespace std;


int sum(int n){
    if(n==0){
        return 0 ;

    }
    return n+sum(n-1);
}


int main(){
    int n = 4;
    cout << sum(n);
}