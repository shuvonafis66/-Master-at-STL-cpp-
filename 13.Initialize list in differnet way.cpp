#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> Mylist(5, 10);

    cout << "The elements are: " << endl;

    for (auto it = Mylist.begin(); it != Mylist.end(); ++it)
    {
        cout << " " << *it;
    }

    return 0;
}
