#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> myList = {1, 2, 3, 4, 6, 6};

    auto it = myList.begin();
    advance(it, 3); // Move iterator to the fourth position

    myList.erase(it); // Erase the element at the fourth position

    // Printing elements after erase
    cout << "After erasing the element: " << endl;
    for (auto it = myList.begin(); it != myList.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}


