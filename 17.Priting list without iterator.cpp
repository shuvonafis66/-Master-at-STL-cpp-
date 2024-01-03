#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>list1={1,2,3,4,5,5};
    vector<int>list2(list1);


    cout<<"Printing the elements of vector 2: "<<endl;
    {for(auto i:list2)
        cout<<i<<" ";
    }

    return 0;

}

