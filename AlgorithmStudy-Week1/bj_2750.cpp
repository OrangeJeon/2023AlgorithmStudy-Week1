#include <iostream>
using namespace std;

int main()
{
    int N, temp; 
    cin >> N; 
    int* arr = new int[N];
    for (int i = 0; i < N; i++) 
    {
        cin >> temp;
        arr[i] = temp;
    }

    //버블정렬
    for (int j = 0; j < N; j++) 
    {
        for (int k = 0; k < N - 1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                temp = arr[k]; 
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << endl;
    } 
    delete[]arr; 
    return 0; 
}