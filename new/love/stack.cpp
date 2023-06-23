#include<iostream>
using namespace std;
#include<stack>
int main() {
stack<string> s;

s.push("love");
s.push("babbar");
s.push("kumar");

cout<<"top element "<< s.top()<<endl;
 
 s.pop();
 cout<<"top element "<<s.top()<<endl;
 cout<<"size "<<s.size()<<endl;
 cout<<"empty or not "<<s.empty()<<endl; 
}