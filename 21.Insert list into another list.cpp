#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> myList1(5, 200);
    list<int> myList2 = {1, 2, 3, 4, 5};

    // Inserting elements from myList1 at the beginning of myList2
    myList2.insert(myList2.begin(), myList1.begin(), myList1.end());

    cout << "The elements are: " << endl;

    for (auto i : myList2)
    {
        cout << i << " ";
    }

    return 0;
}


