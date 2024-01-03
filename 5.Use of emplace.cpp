#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> myList = {1, 2, 3, 4, 5};

    auto it = myList.begin();
    advance(it, 1); // Move iterator to the second index

    myList.emplace(it, 200);

    myList.emplace_back(300);

    cout << "After updating the elements are: " << endl;

    // Printing elements
    for (auto it = myList.begin(); it != myList.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}

