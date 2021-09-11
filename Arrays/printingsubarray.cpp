#include <bits/stdc++.h>
using namespace std;
void printing_subarray(int v[], int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = i ; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << v[k] << " , ";
            }
            cout << endl;
        }
    }
}
int main()
{
    int v[] = {10, 20, 40, 80, 30};
    int n = sizeof(v) / sizeof(int);

    printing_subarray(v, n);
    return 0;
}
