//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int num= 5;
    cout<<num<<endl;
    cout<<"address of num is "<< &num<<endl;

    int *ptr= &num;

    cout<<"adress is: "<<ptr<<endl;
    cout<<"value is: "<<* ptr<<endl;

    char d = 'a';
    char *p2= &d;

        cout<<"adress is: "<<p2<<endl;
    cout<<"value is: "<<* p2<<endl;

cout<<"size of integer is "<<sizeof(num)<<endl;
cout<<"size of char is "<<sizeof(d)<<endl;
cout<<"size of pointer is "<<sizeof(ptr)<<endl;
cout<<"size of pointer is "<<sizeof(p2)<<endl;


}