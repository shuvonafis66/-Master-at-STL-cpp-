#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> myList = {1, 2, 3, 4, 6, 6};

    myList.pop_back();

    // Printing elements after removing the last element
    for(auto it = myList.begin(); it != myList.end(); ++it)
    {
        cout << " " << *it;
    }

    return 0;
}
