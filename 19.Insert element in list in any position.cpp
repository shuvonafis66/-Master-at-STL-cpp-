#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> myList(5, 200);

    // Inserting 300 at the position 2
    auto it1 = next(myList.begin(), 2);
    myList.insert(it1, 300);

    // Emplacing 500 at the position 3
    auto it2 = next(myList.begin(), 3);
    myList.emplace(it2, 500);

    cout << "The elements are: " << endl;

    for(auto i : myList)
    {
        cout << i << " ";
    }

    return 0;
}
