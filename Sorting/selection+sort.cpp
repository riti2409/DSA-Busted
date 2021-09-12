#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    
    for (int pos = 0; pos <= n - 1; pos++)
    {
        int min_pos = pos;
        for (int j = pos; j < n; j++)
        {
            if (arr[j] < arr[min_pos])
            {
                min_pos = j;
            }
        }
        swap(arr[min_pos],arr[pos]);
    }
}
int main()
{
    int a[] = {1, 5, 2, 4, 9, 7};
    int n = sizeof(a) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    selection_sort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}