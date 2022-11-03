//Write a program to accept a 5 digit integer N and then generates a number M by adding 1 to each digit.

#include <iostream>

using namespace std;

int main()
{
    int n , sum = 0;
    int number , remainder;

    cout << "Enter the digit ";
    cin >> n;
    while(n>0)
    {
        number = n%10;
        sum = sum + (number+1);
        number = number/10;
    }

    number = sum;
    sum = 0;
    while(n>0)
    {
        number = n%10;
        sum = sum + number;
        number = number/10;
    }

    cout << sum;
    

    return 0;
}