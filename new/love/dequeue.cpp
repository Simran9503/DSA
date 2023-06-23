/*doublely ended queue....array jisme insertion deletion dono end pe kiya ja skta hai*/
#include <iostream>
#include<deque>

using namespace std;
int main() {
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }

    // d.pop_back();
    cout<<endl;

     /*for(int i:d){
        cout<<i<<" ";
    }*/

    //use empty , front , back

    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"after erase "<<d.size()<<endl;



}