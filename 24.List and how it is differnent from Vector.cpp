#include<iostream>
#include<list>

using namespace std;


int main()
{


    list<int>listi={1,4,6,6,7,2};
    listi.push_back(5);
    listi.push_front(4);//push front is not available in vector
    listi.emplace_back(2);
    listi.emplace_front(3);//emplace front is not available in vector


    cout<<"The elements of lists are: ";

    for(auto it:listi)
    {
        cout<<it<<" ";
    }

    return 0;


    }
