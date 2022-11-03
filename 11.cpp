//Write a program to accept cardinality of set A as N, and cardinality of set B as M. 
//Then accept elements of set A and set B. Generate set C which is union of set A and set B, set D which is intersection set of set A and Set B. 
//Print set A, B, C, D, Cardinality of set C, Cardinality of set D.

#include <iostream>
#include <set>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    set<int> a = {1, 2, 3, 4};
    cout<<"Set A = ";

    set<int>::iterator it;  // Creating the iterator.
    for (it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    multiset<int> b = {4, 5, 6, 2};
    cout<<"Set B = ";
    set<int>::iterator ite;  // Creating the iterator.
    for (ite = b.begin(); ite != b.end(); ite++)
    {
        cout << *ite << " ";
    }
    cout << endl;


    vector<int> result;
    vector<int> result02;

    cout << "Set C = ";
    set_union(begin(a), end(a),
              begin(b), end(b),
              inserter(result, end(result)));

    for_each(begin(result), end(result), [](int x)
             { cout << x << " "; });
             cout << endl;

    cout << "Set D = ";
    set_intersection(begin(a), end(a),
                     begin(b), end(b),
                     inserter(result02, end(result02)));

    for_each(begin(result02), end(result02), [](int y)
             { cout << y << " "; });

    return 0;
}