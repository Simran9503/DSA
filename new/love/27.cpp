#include<bits/stdc++.h>
using namespace std;

void print(int* p) {
    cout<<&p<<endl;
}

int main(){

    int n= 9;
    int *q= &n;
    cout<<&q<<endl;


    print(q);

    return 0;
}

