// Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N. 
//Please note N can have maximum 5 digits.

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
        sum = sum*10 + number;
        N = N/10;
    }

    cout << "Reverse of digits are = " << sum ;
    return 0;
}