#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int a[] = {2, 3, 1, 0, 5, 4, 8};
    int n = 7;

    bubbleSort(a, n);

    cout << "Sorted array: ";
    display(a, n);

    return 0;
}
