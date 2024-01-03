#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list<int> myList = {1, 2, 3146, 10, 11, 23, 45};

    cout << "Sorting the list in decreasing order" << endl;

    myList.sort(greater<int>());

    for (auto it = myList.begin(); it != myList.end(); ++it)
    {
        cout << " " << *it;
    }

    cout << endl;

    cout << "Sorting the list in increasing order" << endl;

    // Creating a copy of the list before sorting in increasing order
    list<int> copyList = myList;

    copyList.sort();

    for (auto it = copyList.begin(); it != copyList.end(); ++it)
    {
        cout << " " << *it;
    }

    return 0;
}
