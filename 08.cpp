//Write a program to accept a list of N integers. Accept integer K. Find the Kth smallest number in the list and its position.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
 

int smallest(int arr[], int N, int K)
{
    sort(arr, arr + N);
 
    return arr[K - 1];
}
 

int main()
{
    int arr[] = { 12, 3, 5, 7, 19 };

    int N = sizeof(arr) / sizeof(arr[0]);
    
    int K = 2;

    cout << "K'th smallest element is " << smallest(arr, N, K);

    return 0;
}