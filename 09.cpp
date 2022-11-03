//Write a program to accept a list L1 of N integers. 
//Accept integer M. Multiply each integer in the list by M and generate a new list L2. Print the lists L1 and L2.

#include <iostream>
#include<list>  

using namespace std;

void display( list<int> &liist)
{
    list<int> :: iterator it;
    for(it=liist.begin() ; it != liist.end() ; it++ )
    {
        cout << (*it) *(5) << " ";
    }
}

int main()
{
    list<int> list;

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);

    display(list);
    

    return 0;
}
