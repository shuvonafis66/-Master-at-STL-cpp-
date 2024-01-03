#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> myList(5, 200);

    // Inserting 2 copies of 100 at position 2
    auto it = next(myList.begin(), 2);
    myList.insert(it, 2, 100);

    cout << "The elements are: " << endl;

    for (auto i : myList)
    {
        cout << i << " ";
    }

    return 0;
}
