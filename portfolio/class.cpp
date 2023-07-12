#include<iostream>
using namespace std;

class nimbupani {
    private:
    char a, b, c;
    public:
    int roll, age;
    void setdata(char s , char d, char n);
    void getdata() {
        cout<< a << endl;
        cout<< b << endl;
        cout<< c << endl;
        cout<< roll << endl;
        cout<< age << endl;
    }
};
void nimbupani :: setdata(char s, char d, char n) {
    a = s;
    b = d;
    c = n;
}

int main() {
 nimbupani mem;
 mem.roll = 19;
 mem.age = 20;
  mem.setdata('a', 'b', 'c');
  mem.getdata();
 
  return 0;
}