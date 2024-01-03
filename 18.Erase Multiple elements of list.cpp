#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> myList = {1, 2, 3, 8, 34, 3536};

    auto startIt = next(myList.begin(), 2); // Iterator pointing to the element at index 2
    auto endIt = next(myList.begin(), 4);   // Iterator pointing to the element at index 4

    myList.erase(startIt, endIt);

    for (auto it : myList)
    {
        cout << it << " ";
    }

    return 0;
}
