
#include <bits/stdc++.h>

using namespace std;
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 4, 2, 6, 5};
    int n = sizeof(arr) / sizeof(n);
    int key;
    cin >> key;
    int idx = linearSearch(arr, n, key);
    if (idx != -1)
        cout << "key present at"
             << " " << idx;
    else
        cout << "key not present";

    return 0;
}
