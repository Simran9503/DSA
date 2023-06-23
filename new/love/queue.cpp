#include<iostream>
#include<queue>

using namespace std;
int main() {

    queue<string> q;

    q.push("simran");
    q.push("narendra");
    q.push("pachauri");
    cout<<"size before pop:  "<<q.size()<<endl;

    cout<<"first string : "<<q.front()<<endl;
    q.pop();
    cout<<"first element after pop: "<<q.front()<<endl;
      cout<<"size after pop:  "<<q.size()<<endl;

}
