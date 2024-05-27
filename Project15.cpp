#include <iostream>
#include "fstream"
#include <algorithm>
#include <iterator>
#include <Windows.h>
#include <functional>
#include <array>
#include <vector>
using namespace std;

template<int n, typename T>
void InitArr(T* arr)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
}

template <typename T>
T maximum(T* arr, int n)
{
    T maximum = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    return maximum;
}

template <typename T>
T minimum(T* arr, int n)
{
    T minimum = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }
    return minimum;
}

template<typename T>
T re(T* arr, int n)
{
    arr[3] = n * n;
}

int main()
{
    setlocale(0, "");
    system("Color F0");

    int arr[3]{ 1, 2, 3, };
    re(arr, 10);

    int* a;

    const int n = 50;

    a = new int[n];

    cout << "массив заполненый случайными числами" << endl << endl;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() * 50 / RAND_MAX;
    }
    InitArr<n>(a);
    cout << "\n\nМаксимальный элемент массива - " << maximum(a, n);
    cout << "\n\nМинимальный элемент массива - " << minimum(a, n);
    cout << "\n\nreplace - " << re(a, n);
    cout << "замена элемента массива на переданное значение" << re(a, n) << endl;
    system("pause>>null");
    return 0;
}


