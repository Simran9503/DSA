/* #include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public:
        void setid(void){
            salary = 122;
            cout<<"enter the id ";
            cin>>id;
        }
        void getid(void){
            cout<<"id of emp is"<< id << endl;
        }
};
int main() {
 //employee sim, ro, satvik, noel;
 //sim.setid();
 //sim.getid();
  employee fb[4];
  for(int i = 0; i< 4; i++) {
      fb[i].setid;
      fb[i].getid;
     
  }
     return 0;
}
*/
#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}
