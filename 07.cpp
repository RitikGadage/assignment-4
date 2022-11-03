//	Write a program to a accept a list of N integers. 
//Find the largest and the smallest number in the list and their respective positions in the list.

#include <iostream>

using namespace std;
     
int main()    
{
    int arr[] = {55,3,23,452,82,32};
 
    int length = sizeof(arr) / sizeof(arr[0]);
  
    int max = arr[0];

    int index = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "The largest number is " << max << endl ;

    
    int element = max;
    for(int i=0;i<length;i++)
    {
        if(arr[i]==element)
        {       
            index = i;
            break;
        }
    }
    cout << "The position of largest number is  " << index+1 << endl;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] < max)
            max = arr[i];
    }


    int min = arr[0];
    cout << "The smallest number is " << min << endl ;

   
    int element1 = min;
    for(int i=0;i<length;i++)
    {
        if(arr[i]==element1)
        {       
            index = i;
            break;
        }
    }
    cout << "The position of smallest number is  " << index+1 << endl;

    return 0;
}    