#include<iostream>
#include<list>

using namespace std;

int main()
{
    // Before empty
    list<int> myList1 = {1, 2, 3, 4, 5, 6, 7, 13, 25};

    cout << "Is myList1 empty? " << myList1.empty() << endl;

    // After empty
    list<int> myList2 = {};

    cout << "Is myList2 empty? " << myList2.empty() << endl;

    return 0;
}
