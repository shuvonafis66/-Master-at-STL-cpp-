#include<iostream>
#include<list>
#include<utility>

using namespace std;

int main()
{
    list<pair<int, int>> list1;

    list1.push_back({1, 3});
    list1.emplace_back(4, 5);

    auto it = next(list1.begin(), 1); // Iterator pointing to the second element
    cout << it->second;

    return 0;
}
