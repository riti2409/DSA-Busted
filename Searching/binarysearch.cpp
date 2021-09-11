#include <bits/stdc++.h>

using namespace std;
int BinarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid == key])
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 5, 6, 9};
    int n = sizeof(arr) / sizeof(n);
    int key;
    cin >> key;
    int idx = BinarySearch(arr, n, key);
    if (idx != -1)
        cout << "key present at"
             << " " << idx;
    else
        cout << "key not present";

    return 0;
}
