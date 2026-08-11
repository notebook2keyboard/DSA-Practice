// #include<iostream>
// using namespace std;


// int main(){
//     char name[]={'b','a','s','a','v','a'};
//     cout << name << endl;
// }

// #include<iostream>
// using namespace std;


// int main(){
//     char str[100];

//     cout << "enter the string:";
//     cin.getline(str,100,'$');//$ is a delimiter when we uses this symbol in a input its stops printng after that


//     cout << "output:"<< str << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     char name[]="Basavaraj";
//     int len = 9;

//     for(char ch : name){
//         cout << ch <<" ";
//     }
// }


//  int main(){
//     string str;

//     cout << "enter the string:";
//     getline(cin,str);

//     // cin.getline(str,100,'$');//$ is a delimiter when we uses this symbol in a input its stops printng after that


//     cout << "output:"<< str << endl;
//     return 0;
// }


///string is palimndrome or not

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "madam";
    int st = 0,end = str.size()-1;
    while(st<end){
        if(str[st]==str[end]){
            cout << "its a palindrome";
               return 0;
        }
        st++;
        end--;
      
        }
        cout << "its not a palindrome";
        return 0;
    }
