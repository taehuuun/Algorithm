#include <iostream>

using namespace std;

bool LinearSearch(int arr[], int len, int find);

int main()
{
    int len;
    int find;

    cout << "Enter the size of the array you want to find : " << endl;
    cin >> len;
    cout << "Fill in the array values : " << endl;

    int arr[len];

    for(int i = 0 ; i < len; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the value you want to find : " << endl;
    cin >> find;

    cout << "Find : " <<  LinearSearch(arr,len,find) << endl;


    return 0;
}

bool LinearSearch(int arr[], int len, int find)
{
    if(len == 1) return arr[0] == find;

    for(int i = 0; i < len; i++)
    {
        if(arr[i] == find)
            return true;
    }

    return false;
}