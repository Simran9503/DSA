// C++ program to illustrate the use
// of the Enums

#include <bits/stdc++.h>
using namespace std;

// Defining an enum
enum GeeksforGeeks { Geek1,
					Geek2,
					Geek3 };

//GeeksforGeeks G1 = Geek1;          ye na bhi karein to bhi kaam hota hai..!
//GeeksforGeeks G2 = Geek2;
//GeeksforGeeks G3 = Geek3;

// Driver Code
int main()
{
	cout << "The numerical value "
		<< "assigned to Geek1 : "
		<< Geek1 << endl;

	cout << "The numerical value "
		<< "assigned to Geek2 : "
		<< Geek2 << endl;

	cout << "The numerical value "
		<< "assigned to Geek3 : "
		<< Geek3 << endl;

	return 0;
}
