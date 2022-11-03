//Write a program to accept 5 digit integer N and calculate the sum of its first and fifth digit.

#include <iostream>

using namespace std;

int main()
{
    int n ,first , last;
    cout << "Enter the digit ";
    cin >> n;

    first = n;
    last = n % 10;
    for(first = n ; first >= 10 ; first = first/10 );

    cout << "The sum of first and last digit is " << first+last;
    return 0;
}