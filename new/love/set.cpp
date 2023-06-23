 /*once element is inserted..it cannot be modified..
 delete kar sakte hai..
 element nikalne start krenege to sorted order me niklenege
 
 upar wala set ki defination tha..ab unordered set me sab 
 same hota h siway iske ki ye fast h set se and yahan pr 
 sorted way me nahi fetch hoti h data*/

#include <iostream>
#include<set>

using namespace std;


int main() {
    set<int> s;

    s.insert(5);
    s.insert(7);
    s.insert(88);
    s.insert(9);
    s.insert(6);
    s.insert(5);           //element repeat nai honge output me..set ke andr ek hi bar hoga
    s.insert(7);
    s.insert(88);
    s.insert(9);
    s.insert(6);

    for(auto i: s){
        cout<<i<<endl;
    }cout<<endl;

set<int>::iterator it = s.begin();
it++;

//s.erase(s.begin());

s.erase(it);

    for(auto i: s){
        cout<<i<<endl;
    } cout<<endl;
    cout<<"-5 is present or not: "<<s.count(-5)<<endl;

    set<int>::iterator itr = s.find(5);

    for(auto it= itr; it!=s.end(); it++) { 
        cout<<it<<" ";
    }cout<<endl;
}