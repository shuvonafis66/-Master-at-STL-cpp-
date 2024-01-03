#include<iostream>
#include<list>

using namespace std;

int main()
{
    // Declare variables
    int n, value;
    list<int> list1;

    // Prompt user for the number of elements to store in the list
    cout << "How many elements you want to store in list: " << endl;
    cin >> n;

    // For taking input from the user and adding elements to the list
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element number " << i + 1 << ": " << endl;
        cin >> value;
        list1.push_back(value);
    }

    // For printing the elements of the list using iterators
    cout << "The elements in the list are: " << endl;
    for (auto it = list1.begin(); it != list1.end(); ++it)
    {
        cout << *it << endl;
    }

    return 0;
}

