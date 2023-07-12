#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int n,p,x,y;
	    cin>>n>>p>>x>>y;
	    int a[n], s=0;
	    for(int i=1; i<p; i++) {
	        cin>>a[i];
	        if(a[i]==0) s+=x;
	        else s+=y;
	    }
	    cout<<s+y;
	}
	return 0;
}