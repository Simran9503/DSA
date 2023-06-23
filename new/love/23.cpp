#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(4);
    v.push_back(9);

    v[3]= 90;
    v[4]= 7;
    v[5]= 77;
    v[6]= 81;
    v.push_back(21);
    v.push_back(100);
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v.at(3)<<endl;

}