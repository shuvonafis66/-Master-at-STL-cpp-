#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> myList = {1, 2, 3, 4, 6, 6};

    cout << myList.front() << endl; // Print the first element
    cout << myList.back();          // Print the last element

    return 0;
}
