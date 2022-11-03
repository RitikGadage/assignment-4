// Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N. 
// Please note N can have maximum 5 digits. Print the numbers N and M. Compare N with M and print the result.

#include <iostream>

using namespace std;

int main()
{
    int M , sum = 0, N;
    cout << "Enter the number ";
    cin >> N;

    while(N != 0)
    {
        M = N%10;
        sum = sum*10 + M;
        N = N/10;
    }

    cout << sum ;

    if(M < N)
    {
        cout << "M is smaller than N";
    }
    
    else{
        cout << "M is greater than N";
    }
    
    return 0;
}