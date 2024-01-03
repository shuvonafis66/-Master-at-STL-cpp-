#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> list1(5, 200);
    list<int> list2 = {1, 2, 3, 4, 5};

    list1.swap(list2);

    cout << "The elements of list 1 are: " << endl;

    for (auto i : list1)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "The elements of list 2 are: " << endl;

    for (auto i : list2)
    {
        cout << i << " ";
    }

    return 0;
}



