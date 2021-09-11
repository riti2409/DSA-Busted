#include <bits/stdc++.h>
using namespace std;

void printing_subarray(int v[], int n)
{
    int pf[10000];
    pf[0] = v[0];
    for (int i = 1; i <= n; i++)
    {
        pf[i] = pf[i - 1] + v[i];
    }
    int largest_Sum = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            int subarraysum = i > 0 ? pf[j] - pf[i - 1] : pf[j];
            largest_Sum = max(subarraysum, largest_Sum);
        }
    }
    cout << largest_Sum << endl;
}
int main()
{
    int v[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(v) / sizeof(int);

    printing_subarray(v, n);
    return 0;
}
