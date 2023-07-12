#include<iostream>
using namespace std;
struct student{
    int roll;
    string name;
    int age;
};
int main() {
struct student s[5];
for(int i = 0; i < 5; i++) {
    cout<< "student" << i+1 << endl;
    s[i].roll = i+1;
    cout<< "name:\n";
    cin>> s[i].name;
    cout<< "age:\n";
    cin>> s[i].age; 
} 
for(int i= 0; i<= 4; i++) {
    if(s[i].roll ==2) {
        cout<< "student"<< i+1<< endl;
        cout<<"roll:" << s[i].roll <<endl;
        cout<< "name:" << s[i].name << endl;
        cout << "age:" << s[i].age <<endl;
    }
}
return 0;
}
