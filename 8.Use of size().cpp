#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> myList = {1, 2, 3};

    cout << "Before inserting new elements the size is: " << endl;
    cout << "The size of the list is: " << myList.size() << endl;

    myList.push_back(5);
    myList.push_back(8);
    myList.push_back(9);
    myList.push_back(10);

    cout << "After inserting new elements the size is: " << endl;
    cout << "The size of the list is: " << myList.size() << endl;

    return 0;
}



