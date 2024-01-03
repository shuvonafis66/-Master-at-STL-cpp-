#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> myList = {1, 2, 3, 4, 5};

    auto it = myList.end();  // Iterator pointing to the end of the list

    myList.emplace_back(1);
    myList.emplace_back(2);
    myList.emplace_back(200);
    myList.emplace_back(3);
    myList.emplace_back(4);
    myList.emplace_back(5);
    myList.emplace_back(300);
    myList.emplace_back(700);
    myList.emplace_back(1000);

    cout << "After updating the elements are: " << endl;

    // Printing elements
    for (auto it = myList.begin(); it != myList.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}
