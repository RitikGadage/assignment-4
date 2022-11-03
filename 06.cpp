//Accept cost price(CP) and Selling price(SP) of an item. Calculate the ammount of PROFIT/LOSS made by the seller and print the

#include <iostream>

using namespace std;

int main()
{
    int cp , sp , sum;
    cout << "Enter the Cost price ";
    cin >> cp;
    cout<<endl;

    cout << "Enter the Selling price ";
    cin >> sp;
    cout<<endl;

    if(sp>cp)
    {
        sum = sp-cp;
        cout << "The profit is of " << sum;
    }
    else{
        sum = cp-sp;
        cout << "The loss is of " << sum;
    }

    return 0;
}