 #include <iostream>
 using namespace std;
#include <vector>

 int main() {
    vector<int> v;

    vector<int> a(5,1); // (5,1) --> 5 matlab size...1 mtlb default me one se initialise kar do
    vector<int> last(a) ; // last vector created with   all elements of a 
    
    cout<<"capacity-"<<v.capacity()<<endl;
    //capacity ka matlab kitna memory ya space assign hua  hai 
    //and size ka matlab kitne element pade hai isme

    v.push_back(1);
    cout<<"capacity-"<<v.capacity()<<endl;

      v.push_back(2);
    cout<<"capacity-"<<v.capacity()<<endl;

      v.push_back(3);
    cout<<"capacity-"<<v.capacity()<<endl;

    cout<<"size "<<v.size()<<endl;

    cout<<"at index 2 "<<v.at(2)<<endl;

    cout<<"front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    } cout<<endl;

    v.pop_back();

    cout<<"after pop" <<endl;
    for(int i:v) {
        cout<<i<<" ";

    }

    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
     cout<<"after clear size "<<v.size()<<endl;




     
 }