#include<bits/stdc++.h>
using namespace std;
string reverse(string s){
    int n=s.length();
    string ans="";
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){
        string word="";
        while(i<n && s[i] != ' '){
            word=word+s[i++];
        }
        reverse(word.begin(),word.end());
        if(word.length()>0){
            ans+=" "+word;
        }
    }
    return ans.substr(1);

}
