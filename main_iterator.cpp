#include <iostream>
#include "NodeList.cpp"


using namespace std;
int main(int argc, char** argv)
{
	NodeList<int> L;
 
	for (int i = 0; i < 10; ++i)
	{
		NodeList<int>::Iterator ii = L.begin();
		int value;
        cout << "Enter a value: ";
		cin >> value;
		L.insert(ii, value);
		++ii;
	}
	cout << "Printing the values you just entered " << endl;
	for (NodeList<int>::Iterator ii=L.begin(); ii!=L.end(); ++ii)
	{
		cout << *ii << endl;
	}
    
	cout << "\nNow printing the values backwards " << endl;
	for (NodeList<int>::Iterator ii=L.end(); ii!=L.begin(); --ii)
	{
        // FYI: Once "ii" reaches the beginning of ADT, the loop stops
        
		if (ii == L.end()) continue;
		cout << *ii << endl;
	}
	return 0;
}
