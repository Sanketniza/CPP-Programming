#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    // Convert a Whole String to Uppercase

    string s;
    cout << "Enter the string : ";
    getline(cin , s);

    cout << "The string without spaces is : " << s << endl;

    string result = "";
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            result += char(s[i] - 'a' + 'A');
        } else {
            result += s[i];
        }
    }

    cout << "The string without spaces is : " << result << endl;
 return 0;
}