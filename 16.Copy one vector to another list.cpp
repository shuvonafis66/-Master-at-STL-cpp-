#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>list1={1,2,3,4,5,5};
    vector<int>list2(list1);


    cout<<"Printing the elements of vector 2: "<<endl;
    for(auto i=list2.begin();i!=list2.end();i++)//vec2.begin and vec2.end is basically the elements address of these elements.
    {
        cout<<*i<<" ";//to convert adress to elements we are using *i
    }

    return 0;

}
