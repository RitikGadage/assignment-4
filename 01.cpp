// Write a program to accept an integer N and calculate the sum of its digits. Please note N can have maximum 5 digits.

#include <iostream>

using namespace std;

int main()
{
    int number , sum = 0, N;
    cout << "Enter the number ";
    cin >> N;

    while(N != 0)
    {
        number = N%10;
        sum = sum + number;
        N = N/10;
    }

    cout << "Sum of digits are = " << number ;
    return 0;
}