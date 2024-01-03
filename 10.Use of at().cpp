#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    list<int> Mylist = {1, 2, 3, 4, 5, 6, 7, 13, 25};

    // Move iterator to the fifth element
    auto it = Mylist.begin();
    advance(it, 4);

    cout << "The fifth element is: " << *it << endl;

    return 0;
}
//We are not able to use at.
