// #include<iostream>
// #include<string>
// using namespace std;

// string isprime(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             return "its a non prime";
//         }
//     }
//     return "its a prime";
// }

// int main(){
//     int n = 23;
//     cout << isprime(n);
// }

//sieve.of eratosthenes

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<bool> isprime(n, true);

//     int count = 0;

//     for (int i = 2; i < n; i++) {

//         if (isprime[i]) {
//             count++;

//             for (int j = i * 2; j < n; j += i) {
//                 isprime[j] = false;
//             }
//         }
//     }

//     cout << "Number of primes: " << count << endl;

//     return 0;
// }


//digits in number

// #include<iostream>
// using namespace std;

// void printdigits(int n){
//     int count = 0;
//     while(n != 0){
//         int digit=n % 10;
//         count++;

//         n = n/10;
//     }
//     cout << count <<endl;
// }

// int main(){
//     int n = 5674;
//     printdigits(n);
// }

//count of digits in a number

// #include<iostream>
// using namespace std;

// void printdigits(int n){
//     int count = 0;
//     while( n != 0){
//         int digits = n%10;
//         count++;

//         n = n/10;
//     }
//     cout << count << endl;
// }

// int main(){
//     int n = 4536;
//     printdigits(n);
// }

//sum of digits in a number

// #include<iostream>
// using namespace std;

// void printdigits(int n){
//     int sum = 0;
//     while(n != 0){
//         int digits = n%10;
//         sum += digits;

//         n = n/10;
//     }
//     cout <<sum<< endl;
// }
// int main(){
//     int n = 1114;
//     printdigits(n);
// }

//armstrong number

// #include<iostream>
// using namespace std;

// bool isarmstrong(int n){
//     int copyN = n;
//     int sumofdigits = 0;
//     while(n != 0){
//         int digits = n%10;
//         sumofdigits = (digits*digits*digits);

//         n = n/10;
//     }
//     return sumofdigits == copyN;
// }

// int main(){
//     int n =145;
//     if(isarmstrong(n)){
//         cout <<"ist an aramstrong num";
//     }else{
//         cout<<"its not an aramstrong num";
//     }
// }

//euclidis algorithm to find a gcd 


// #include<iostream>
// using namespace std;

// int gcd(int a ,int b){
//     while(a != 0 && b != 0){
//         if(a<b){
//             a = a%b;
//         }else{
//             b = b%a;
//         }
//     }

//     if(a==0) return b;
   
//         return a;
 

// }

// int main(){
//     int a = 28;
//     int b = 20;
//     cout << gcd(a,b) << endl;
// }

//lcm

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (a != 0 && b != 0) {
        if (a < b) {
            b = b % a;
        } else {
            a = a % b;
        }
    }

    if (a == 0)
        return b;

    return a;
}

int lcm(int a, int b) {
    int g = gcd(a, b);
    return (a * b) / g;
}

int main() {
    int a = 28;
    int b = 20;

    // cout << "GCD = " << gcd(a, b) << endl;
    cout << "LCM = " << lcm(a, b) << endl;
}