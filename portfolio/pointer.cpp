#include<iostream>
using namespace std;
int main() {
    int a(4);
    int* b = &a;
    cout<< b<< endl;
    cout<< *b << endl;
    cout << a << &a;
    return 0;
}