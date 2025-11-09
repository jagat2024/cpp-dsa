#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s) {
    int st = 0;
    int end = s.length() - 1;

    while (st < end) {
        // skip non-alphanumeric characters
        if (!isalnum(s[st])) {
            st++;
            continue;
        }
        if (!isalnum(s[end])) {
            end--;
            continue;
        }
        // compare in lowercase
        if (tolower(s[st]) != tolower(s[end])) {
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    if(isPalindrome(s)){
        cout<<"its a plaindrome"<<endl;   
    }
    else{
        cout<<"not palindrome";
    }
}
