#include <bits/stdc++.h>
using namespace std;
void count_sort(int arr[], int n)
{
    int largest = *max_element(arr, arr + n);
    vector<int> freq(largest + 1, 0);
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    int j = 0;
    for (int i = 0; i <= largest; i++)
    {

        while (freq[i] > 0)
        {
            arr[j] = i;
            j++;
            freq[i]--;
        }
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
    count_sort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}