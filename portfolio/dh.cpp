#include <iostream>
#include<algorithm>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int n, p, s,d;
	    cin>>n;
	    int a[n];
	    for(int i = 1; i <=n; i++) {
	        cin>>a[i];
        
	    }
    for(int i =1; i<n;i++) {
    if(a[i]==1) p++;
        else s++;
      }
	   
    //cout<<p<<endl<<s;
   
	   if(p>s) d= p-s;
    else d= s-p;
     if(p==0 || s==0) {
      if(d%2==0) cout<<d/2<<endl;
       else cout<<"-1"<<endl;
    }
    //if(d<0) d=d*(-1);
       else if(p%2==0 && s%2==0) {
         cout<<d-1<<endl;
       }
	     else {
         if(d%2==0) 
        cout<< d<<endl;
        else cout<<"-1"<<endl;
	}
    }
    
	return 0;
}