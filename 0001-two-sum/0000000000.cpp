// CPP program to demonstrate implementation of
// find function in unordered_map.
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
		cout << "Element Present\n";

	// Searching for element 12
	if (um.find(12) == um.end())
		cout << "Element Not Present\n";
	else
		cout << "Element Present\n";

	return 0;
}
