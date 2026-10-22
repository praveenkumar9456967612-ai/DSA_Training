#include <iostream>
using namespace std;

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minIndex])
                minIndex = j;
        }

        swap(a[i], a[minIndex]);
    }
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int a[] = {64, 25, 12, 22, 11, 34};
    int n = 6;

    selectionSort(a, n);

    cout << "Sorted array: ";
    display(a, n);

    return 0;
}
