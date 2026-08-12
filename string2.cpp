//removing of occurences
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str = "daabcbaabcbc";
//     string part = "abc";

//     while(str.length()>0 && str.find(part)<str.length()){
//         str.erase(str.find(part),part.length());
//     }
//    cout << str << endl;
// }


//valid palindrome

#include<iostream>
#include<string>
using namespace std;

bool isAlphanumeric(char ch){
    if((ch>='0' && ch<='9')||(tolower(ch)>='a')&&(tolower(ch)<='z')){
        return true;
    }
    return false;
}

int main(){
    string str = "AC3?e3c&a";
    int st = 0,end=str.length()-1;
    while(st<end){
     if(! isAlphanumeric (str[st]) ){
        st++;
        continue;
     }
     if(! isAlphanumeric(str[end])){
        end--;
        continue;
     }
     if(tolower(str[st])!=tolower(str[end])){
        cout << "its not a palindrome";
     }
     st++,end--;
    }
cout << "its a palindrome";
}