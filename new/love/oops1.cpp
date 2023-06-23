#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 class Hero{
    private:
    int health;
    public:
    char *name;
    char level;
    static int timetocomplete;

     Hero() {
        cout<<"constructor called" <<endl;
        name = new char[100];
             }

//parameterised constructor
Hero(int health) {
    //cout<<"this->" <<this<<endl;  //this is a pointer to current object
    this->health = health;
}
Hero(int health, char level) {
    this->health = health;
    this->level = level;
}
    Hero(Hero& temp) {
                char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
   }
    void print() {
        cout<<endl;
        cout<<"[name " << this-> name <<",";
        cout<< "level "<<this->level <<",";
        cout<< "Health "<<this->health <<"]"<<endl;
    }

    int gethealth(){
        return health;
    }

    void sethealth(int h){
        
        health= h;
    }

        int getlevel(){
        return level;
    }

    void setlevel(char ch){
        level= ch;
    }

    void setname(char name[]) {
        strcpy(this->name, name);
    }

    //destructor
    ~Hero() {
        cout<<"destructor bhai called " <<endl;
    }

    static int random(){
        return timetocomplete;
    }

 };
 int Hero::timetocomplete = 5;

 int main() {
//cout<< Hero::timetocomplete<<endl;
cout<< Hero::random()<<endl;




















// Hero a;

// Hero *b = new Hero();

// delete b;
















// hero1.sethealth(12);
// hero1.setlevel('D');
// char name[7] ="BABBAR";
// hero1.setname(name);

// hero1.print();
// //use default copy constructor

// Hero hero2(hero1);
// hero2.print();

// hero1.name[0]='G';
// hero1.print();
// hero2.print();

// Hero simran(70, 'C');
// simran.print();

// Hero digvijay(simran);
// digvijay.print();





// //object created statically
// //cout<<"hi" <<endl;
// Hero ramesh(10);
// ramesh.print();
// //cout<<"address of ramesh " << &ramesh <<endl;
// //cout<<"bye" <<endl;

// //dynamically
// Hero *h= new Hero(11) ;
// h->print();

// Hero temp(22, 'B');
// temp.print();
















    // //statically
    // Hero a;
    // a.level = 'A';
    // a.sethealth(70);
    // cout<<"level is " <<a.level<<endl;
    // cout<<"health is "<<a.gethealth() <<endl;
    // //dynamically
    // Hero* m= new Hero;

    // m->level = 'P';
    // m->sethealth(55);
    // cout<<"level is " <<(*m).level<<endl;
    // cout<<"health is "<<(*m).gethealth() <<endl; 

    // cout<<"level is " <<m->level<<endl;
    // cout<<"health is "<<m->gethealth() <<endl; 


     
    // //  //creation of object 
    // //  Hero ramesh;
    // //  cout<<"ramesh health is" <<ramesh.gethealth() <<endl;
    // //  ramesh.sethealth(70);

    // //  //ramesh.health = 70;
    // //  ramesh.level = 'A';

    // //  cout<< "health is: "<< ramesh.gethealth()<<endl;
    // //  cout<< "level is: "<< ramesh.level<<endl;


 }
