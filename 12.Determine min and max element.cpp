#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
    list<int> myList = {1, 2, 4, 131, 53, 131, 12426, 14, 131};

    cout << "The maximum element is: " << endl;
    int n = *max_element(myList.begin(), myList.end());

    cout << n << endl;

    cout << "The minimum element is: " << endl;
    int m = *min_element(myList.begin(), myList.end());

    cout << m << endl;

    return 0;
}
