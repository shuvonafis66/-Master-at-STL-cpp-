#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list<int> myList = {1, 2, 4, 131, 53, 131, 12426, 14, 131};

    int k = count(myList.begin(), myList.end(), 131); // number of occurrences of elements
    cout << k << endl;

    return 0;
}

