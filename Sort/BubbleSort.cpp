#include <iostream>

using namespace std;

void BubbleSort(int list[], int len);
void ImpBubbleSort(int list[], int len);

int main()
{
    int len;

    cout << "Enter the size of the list : ";
    cin >> len;

    int list[len];

    cout << "Fill in the list values : ";
    
    for(int i = 0 ; i < len; i++)
    {
        cin >> list[i];
    }

    BubbleSort(list,len);
    // ImpBubbleSort(list,len);
    cout << endl;
    cout << "===== Result =====" << endl; 

    for(int i = 0 ; i< len ; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;

    return 0;
}

void BubbleSort(int list[], int len)
{
    cout << "Original Bubble Sort" << endl;

    // 길이가 10이라면 9회 반복 수행
    for(int i = 0; i < len -1 ; i++)
    {
        cout << "===== " << i << " =====" << endl;

        // 길이가 10이라면 8회 반복 수행
        for(int j = 0; j< len - i - 1; j++)
        {
            cout << j << " : ";

            // 코드 이해를 위해 left right변수에 값을 대입
            int left = list[j];
            int right = list[j+1];

            // left가 right 보다 크다면 교환 진행 (정석적인 Swap코드)
            if(left > right)
            {
                // Ex)
            	// {} = tmp
                // list[J] = 5
                // list[J+1] = 2 
                
                // 처음상태 => {tmp} | [5][2]

                int tmp = list[j];      // 현재 상태 {tmp(5)} | [5][2]
                list[j] = list[j+1];    // 현재 상태 {5} | [5(2)][2]
                list[j+1] = tmp;        // 최종 상태 {5} | [2][5]
            }
            else
            {
                left = 0;
                right = 0;
            }

            for(int k = 0; k < len; k++)
            {
                if(k == j)
                {
                    cout << "[";
                }

                cout << list[k];

                if(k == j+1)
                {
                    cout << "]";
                }

                cout << " ";
            }

            if(left != 0 && right != 0)
                cout << "[" << left << " <=> " << right << "]";
                
            cout << endl ;
        }

        cout << "Result : ";
        for(int j = 0 ; j< len; j++)
        {
            cout << list[j] << " ";
        }

        cout << endl << endl;
    }
}

void ImpBubbleSort(int list[], int len)
{
    cout << "New Bubble Sort" << endl;

    // 길이가 10이라면 9회 반복 수행
    for(int i = 0; i < len -1 ; i++)
    {
        // 플래그(교환 상태 확인용) 변수 추가
        bool change = false;
        cout << "===== " << i << " =====" << endl;

        // 길이가 10이라면 8회 반복 수행
        for(int j = 0; j< len - i - 1; j++)
        {
            cout << j << " : ";

            // 코드 이해를 위해 left right변수에 값을 대입
            int left = list[j];
            int right = list[j+1];

            // left가 right 보다 크다면 교환 진행 (정석적인 Swap코드)
            if(left > right)
            {
                // Ex)
            	// {} = tmp
                // list[J] = 5
                // list[J+1] = 2 
                
                // 처음상태 => {tmp} | [5][2]
                
                int tmp = list[j];      // 현재 상태 {tmp(5)} | [5][2]
                list[j] = list[j+1];    // 현재 상태 {5} | [5(2)][2]
                list[j+1] = tmp;        // 최종 상태 {5} | [2][5]

                // 교환이 이루어 졌으므로 true 변경
                change = true;
            }
            else
            {
                left = 0;
                right = 0;
            }

            for(int k = 0; k < len; k++)
            {
                if(k == j)
                {
                    cout << "[";
                }

                cout << list[k];

                if(k == j+1)
                {
                    cout << "]";
                }

                cout << " ";
            }

            if(left != 0 && right != 0)
                cout << "[" << left << " <=> " << right << "]";
                
            cout << endl ;
        }

        // change변수가 false(교환이 없었다면) 반복문 탈출
        if(!change)
        {
            cout << "Sort Complete !!" <<endl;
            break;
        }

        cout << "Result : ";
        for(int j = 0 ; j< len; j++)
        {
            cout << list[j] << " ";
        }

        cout << endl << endl;
    }
}