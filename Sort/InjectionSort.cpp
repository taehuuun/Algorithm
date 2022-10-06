#include <iostream>

using namespace std;

void InjectionSort(int list[], int len);

int main()
{
    int len;

    cout << "Enter the size of the List : ";
    cin >> len;

    int list[len];

    cout << "Fill in the list values : ";
    for(int i = 0; i < len; i++)
    {
        cin >> list[i];
    }

    InjectionSort(list, len);

    for(int i = 0; i < len; i++)
    {
        cout <<  list[i] << " ";
    }

    return 0;
}

void InjectionSort(int list[], int len)
{
    int j;
    int key;
    
    for(int i = 1; i < len; i++)
    {
        key = list[i];

        for(j = i-1; j >= 0; j--)
        {
            if(list[j] > key)
            {
                list[j+1] = list[j];
            }
            else
            {
                break;
            }
        }

        list[j+1] = key;
    }
}