#include<bits/stdc++.h>
using namespace std;

int main() {
    string simo ="pachauri";
     stack <char> s;
     for(int i =0; i < simo.length() ; i++) {
        char ch = simo[i];
        s.push(ch);
     }

     string ans = " ";

     while(!s.empty()) {
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
     }

cout<<"answer is: "<< ans << endl;
return 0; 

}