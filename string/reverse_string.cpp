#include<iostream>
#include<string>
using namespace std;
void reverse(string &s) {
    int st = 0;
    int end = s.size() - 1;
    while (st < end) {
        swap(s[st], s[end]);
        st++;
        end--;
    }
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    reverse(s);
    cout << "Reversed string: " << s << endl;
}
