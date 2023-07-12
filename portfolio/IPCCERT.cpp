/*#include <iostream>
using namespace std;
int main() {
    int N, K, P=0;
    long int M;
    cin>>N >>M >>K;
    for(int i =1; i < N +1 ; i++ ) {
    int t[K], Q;
    
    int sum =0;
    if(Q < 10) {
    for(int j = 1; j <= K; j++) {
        cin>>t[j];
    }
    cin>>Q;
    while(K--) {
        
        sum =t[K] + sum;
    }
    if( sum >= M) {
        P++;
    }
    }

    }
    cout<<P<<endl;
    return 0;

}*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int d,l,r;
	    cin>>d>>l>>r;
	    if(d>=l && d<=r) cout<<"Take second dose now"<<endl;
	    else if(d<l) cout<<"Too early"<<endl;
	    else cout<<"Too late"<<endl;
	}
	return 0;
}
