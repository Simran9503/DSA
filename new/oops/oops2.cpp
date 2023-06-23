#include<bits/stdc++.h>
using namespace std;

class couple{
public:
int age;

protected:
char sex;

private:
int years;
char *surname;
 
 public:
char getsex(){
return sex;
}

void setsex(char s){
    sex= s;
}

// char getsurname(){
// return surname;
// }

void setsurname(char s[]){
    strcpy(this->surname ,s);
}
void print() {
        cout<<endl;
        cout<<"[surname " << this-> surname <<"]";
       
    }



};


class love : public couple{
public:
int rollno;

};

int main() {
love simran;
simran.rollno;
simran.age;
simran.setsex('F');
//cout<<simran.getsex()<<endl;
char s[]="pachauri";
simran.setsurname(s);
simran.print();
//cout<<simran.getsurname<<endl;
}
