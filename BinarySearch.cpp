#include <iostream>

using namespace std;

bool BinarySearch(int arr[], int length, int findVal);

int main()
{
    int len = 0;
    int find = 0;

    cout << "Enter the size of the array you want to find : " << endl;
    cin >> len;
    cout << "Fill in the array values in order : " << endl;

    int arr[len];
    
    for(int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the value you want to find : " << endl;
    cin >> find;

    cout << "Find : " << BinarySearch(arr,len,find) << endl;

    return 0;
}

bool BinarySearch(int arr[], int length, int findVal)
{
    if(length <= 0) return false;


    int start = 0;
    int end = length-1;
    int mid = 0;

    while(end >= start)
    {
        mid = start + mid / 2;

        if(arr[mid] == findVal)
        {
            return true;
        }
        else if(arr[mid] > findVal)
        {
            end = mid-1;
        }
        else
        {
            start = mid +1;
        }
    }

    return false;
}