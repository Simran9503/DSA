#include<bits/stdc++.h>
using namespace std;

int main(){

    //int *p = 0 ;

    //cout<<*p<<endl;
    int i= 5;
    int a= i;
    a++;
    cout<<i<<endl;

    int *p = &i;
 cout<<i<<endl;
    (*p)++;
     cout<<i<<endl;

     int *q= p;
     cout<<p<<"-"<<q<<endl;
       cout<< *p<<"-"<<* q<<endl;
int l =3;
    int *t= &l;
    cout<<(*t)++<<endl;

    
    //int *p= 0;
   // p= &i; 



    return 0;
}