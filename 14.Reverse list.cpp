#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> Mylist = {1, 2, 3146, 10, 11, 23, 45};

    cout << "The elements in reverse order are: " << endl;

    for (auto it = Mylist.rbegin(); it != Mylist.rend(); ++it)
    {
        cout << " " << *it;
    }

    return 0;
}
