#include <iostream>

using namespace std;

void SelectionSort(int list[], int len);

int main()
{
    int len;

    cout << "Enter the size of the array : " << endl;
    cin >> len;

    int list[len];

    cout << "Fill in the array values : " << endl;

    for (int i = 0; i < len; i++)
    {
        cin >> list[i];
    }

    SelectionSort(list, len);

    return 0;
}

void SelectionSort(int list[], int len)
{

    for (int i = 0; i < len - 1; i++)
    {
        int min = list[i];

        for (int j = i + 1; j < len; j++)
        {
            if (min > list[j])
            {
                min = list[j];
            }

            if(min != list[i])
            {
                int temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        for (int i = 0; i < len; i++)
        {
            cout << list[i] << " ";
        }
        cout << "Min : " << min << endl;
    }

}