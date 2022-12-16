// CPP program to demonstrate implementation of
// find function in unordered_map.


//um.find(12) == um.end()   --->  If we want to find that value 12 is not present.
//um.find(12) != um.end()   --->  If we want to find that value 12 is present.


#include <bits/stdc++.h>
using namespace std;

int main()
{
	unordered_map<int, bool> um;

	um[12] = true;
	um[6789] = false;
	um[456] = true;

	// Searching for element 23
	if (um.find(23) == um.end())
		cout << "Element Not Present\n";
	else
		cout << "Element Present\n";                  //Element not present

	// Searching for element 12
	if (um.find(12) == um.end())
		cout << "Element Not Present\n";
	else
		cout << "Element Present\n";                  //Element present                  

	return 0;
}
